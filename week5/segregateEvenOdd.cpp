#include <iostream>
using namespace std;
void arrange(int *arr, int n)
{
    int rear = n - 1, front = 0;
    while (front < rear)
    {
        if (arr[rear] % 2 == 0 && arr[front] % 2 == 0)
        {
            ++front;
        }
        if (arr[rear] % 2 == 0 && arr[front] % 2 != 0)
        {
            swap(arr[rear], arr[front]);
            front++;
            rear--;
        }
        if (arr[rear] % 2 != 0 && arr[front] % 2 == 0)
        {
            front++;
            rear--;
        }
        if (arr[rear] % 2 != 0 && arr[front] % 2 != 0)
        {
            --rear;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> array[i];
    arrange(array, n);
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
}