#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int calculateKey(int *arr, int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int *countSort(int *arr, int n)
{
    int key = calculateKey(arr, n);
    int *sortedArray = new int[n];
    int *count = (int *)calloc(key + 1, sizeof(int));
    for (int i = 0; i < n; i++)
        ++count[arr[i]];
    for (int i = 1; i <= key; i++)
        count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (count[arr[i]] > 0)
        {
            --count[arr[i]];
            sortedArray[count[arr[i]]] = arr[i];
        }
    }
    return sortedArray;
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
    arr = countSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);
}