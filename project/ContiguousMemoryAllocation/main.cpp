#include <iostream>

using namespace std;

struct File {
    int id;
    int size;
};

struct Block {
    int id;
    int size;
    bool allocated;
};

void worstFit(Block* blocks, File* files, int numBlocks, int numFiles) {
    cout << "File No\tFile Size\tBlock No\tBlock Size\tFragment\n";
    for (int i = 0; i < numFiles; ++i) {
        int worstIndex = -1;
        int worstFragment = -1;

        for (int j = 0; j < numBlocks; ++j) {
            if (!blocks[j].allocated && blocks[j].size >= files[i].size) {
                int fragment = blocks[j].size - files[i].size;
                if (fragment > worstFragment) {
                    worstFragment = fragment;
                    worstIndex = j;
                }
            }
        }

        if (worstIndex != -1) {
            blocks[worstIndex].allocated = true;
            cout << files[i].id << "\t\t" << files[i].size << "\t\t" << blocks[worstIndex].id << "\t\t" << blocks[worstIndex].size << "\t\t" << worstFragment << endl;
        }
    }
}

void bestFit(Block* blocks, File* files, int numBlocks, int numFiles) {
    cout << "File No\tFile Size\tBlock No\tBlock Size\tFragment\n";
    for (int i = 0; i < numFiles; ++i) {
        int bestIndex = -1;
        int bestFragment = -1;

        for (int j = 0; j < numBlocks; ++j) {
            if (!blocks[j].allocated && blocks[j].size >= files[i].size) {
                int fragment = blocks[j].size - files[i].size;
                if (bestIndex == -1 || fragment < bestFragment) {
                    bestFragment = fragment;
                    bestIndex = j;
                }
            }
        }

        if (bestIndex != -1) {
            blocks[bestIndex].allocated = true;
            cout << files[i].id << "\t\t" << files[i].size << "\t\t" << blocks[bestIndex].id << "\t\t" << blocks[bestIndex].size << "\t\t" << bestFragment << endl;
        }
    }
}

void firstFit(Block* blocks, File* files, int numBlocks, int numFiles) {
    cout << "File No\tFile Size\tBlock No\tBlock Size\tFragment\n";
    for (int i = 0; i < numFiles; ++i) {
        bool allocated = false;
        for (int j = 0; j < numBlocks; ++j) {
            if (!blocks[j].allocated && blocks[j].size >= files[i].size) {
                blocks[j].allocated = true;
                cout << files[i].id << "\t\t" << files[i].size << "\t\t" << blocks[j].id << "\t\t" << blocks[j].size << "\t\t" << (blocks[j].size - files[i].size) << endl;
                allocated = true;
                break;
            }
        }
        if (!allocated)
            cout << "Unable to allocate file " << files[i].id << endl;
    }
}

int main() {
    int numBlocks, numFiles;
    cout << "Enter the number of blocks: ";
    cin >> numBlocks;
    cout << "Enter the number of files: ";
    cin >> numFiles;

    Block* blocks = new Block[numBlocks];
    cout << "Enter the size of the blocks:\n";
    for (int i = 0; i < numBlocks; ++i) {
        cout << "Block " << i+1 << ": ";
        cin >> blocks[i].size;
        blocks[i].id = i + 1;
        blocks[i].allocated = false;
    }

    File* files = new File[numFiles];
    cout << "Enter the size of the files:\n";
    for (int i = 0; i < numFiles; ++i) {
        cout << "File " << i+1 << ": ";
        cin >> files[i].size;
        files[i].id = i + 1;
    }

    char choice;
    do {
        cout << "Choose allocation method:\n";
        cout << "a) Worst-fit\nb) Best-fit\nc) First-fit\nEnter your choice (a/b/c): ";
        cin >> choice;

        switch (choice) {
            case 'a':
                worstFit(blocks, files, numBlocks, numFiles);
                break;
            case 'b':
                bestFit(blocks, files, numBlocks, numFiles);
                break;
            case 'c':
                firstFit(blocks, files, numBlocks, numFiles);
                break;
            default:
                cout << "Invalid choice.\n";
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    delete[] blocks;
    delete[] files;

    return 0;
}
