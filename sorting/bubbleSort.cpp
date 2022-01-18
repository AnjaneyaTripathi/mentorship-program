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
void bubbleSort(int *arr, int size)
{
    int check = 0;
    for (int round = 1; round < size; round++)
    {
        check = 0;
        for (int i = 0; i < size - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                check = 1;
            }
        }
        if (check == 0)
            break;
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
    bubbleSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);
}