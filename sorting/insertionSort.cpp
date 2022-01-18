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
void insertionSort(int *arr, int size)
{int key;
    for(int i = 1; i < size; i++){
        key=arr[i];
        for(int j = i-1; j >=0; j--){
            if(arr[j]>key){
                swap(arr[j],arr[j+1]);
            }
            else break;
        }
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
    insertionSort(arr, n);
    cout << "The sorted array is: ";
    printArray(arr, n);
}