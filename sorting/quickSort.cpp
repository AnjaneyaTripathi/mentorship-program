#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int partition(int *arr, int low,int high,int pivot){
    int i=low,j=high;
    while(i<j){
while(arr[i]<=pivot&&i<j){
    ++i;
}
while(arr[j]>pivot&&i<j){
    --j;
}
if(i<j){
    swap(arr[i],arr[j]);
}
    }
    swap(arr[j],arr[low]);
    return j;
}
void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {int pivot=arr[low];
    int index=partition(arr,low,high,pivot);
    quickSort(arr,low,index);
    quickSort(arr,index+1,high);
    }
}
int main()
{
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "The array is: ";
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "The sorted array is: ";
    printArray(arr, n);
}