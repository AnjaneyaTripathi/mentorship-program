#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void merge(int *arr, int low, int high)
{
    int mid = (low + high) / 2;
    int size = (high - low + 1);
    int *b = new int[size];
    int i, j, k;
    for (i = low, j = mid + 1, k = 0; i <= mid && j <= high && k < size; k++)
    {
        if (arr[i] < arr[j])
        {
            b[k] = arr[i];
            ++i;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
    }
    while (i <= mid && k < size)
    {
        b[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high && k < size)
    {
        b[k] = arr[j];
        j++;
        k++;
    }
    for (k = 0; k < size; k++)
    {
        arr[low + k] = b[k];
    }
    delete b;
}

void mergeSort(int *arr, int low, int high)
{
    if (high > low)
    {
        int mid = (high + low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, high);
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
    mergeSort(arr, 0, n - 1);
    cout << "The sorted array is: ";
    printArray(arr, n);
}