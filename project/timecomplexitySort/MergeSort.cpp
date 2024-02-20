#include <iostream>
#include <fstream>

using namespace std;

// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
    // We have low to mid and mid+1 to high already sorted.
    int i, j, k, temp[high-low+1];
    i = low;
    k = 0;
    j = mid + 1;
 
    // Merge the two parts into temp[].
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = a[j];
            k++;
            j++;
        }
    }
 
    // Insert all the remaining values from i to mid into temp[].
    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
 
    // Insert all the remaining values from j to high into temp[].
    while (j <= high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
 
    // Assign sorted data stored in temp[] to a[].
    for (i = low; i <= high; i++)
    {
        a[i] = temp[i-low];
    }
}
 
// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        // Split the data into two half.
        MergeSort(a, low, mid);
        MergeSort(a, mid+1, high);
 
        // Merge them to get sorted output.
        Merge(a, low, high, mid);
    }
}
 
int main(){
    fstream inputFile;
    int size = 10000; //adjust the size
	string fileName = to_string(size) + ".txt";
	inputFile.open(fileName);
	int arr[size], num = 0, count = 0;
    
    while(inputFile >> num && count < size){
		arr[count++] = num;
	}
 
    MergeSort(arr, 0, size-1);
 
    // Printing the sorted data.
    cout<<"\nMerge Sort\n";
    cout<<"Sorted Data: \n";
    for (int i = 0; i < size; i++)
    cout<<arr[i]<<" ";
 
    return 0;
}