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
void selectionSort(int *arr, int size)
{
    int index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[index])
            {

                index = j;
            }
        }
        swap(arr[i], arr[index]);
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
    selectionSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);
}