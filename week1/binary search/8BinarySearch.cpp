#include <iostream>
using namespace std;
int maxElement(int arr[], int low, int high)
{
    int res = 0;
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            cout << arr[low] << " is the maximum element" << endl;
            return arr[low];
        }
        else
        {
            cout << arr[high] << " is the maximum element" << endl;
            return arr[high];
        }
    }
    if (low == high)
    {
        cout << arr[low] << "is the maximum element" << endl;
        return arr[high];
    }
    if (low < high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << arr[mid] << " is the maximum element" << endl;
            return arr[mid];
        }
        if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
        {
            res = maxElement(arr, mid + 1, high);
            if (res == -1)
                return -1;
            else
                return res;
        }
        if (arr[mid] > arr[mid + 1] && arr[mid] < arr[mid - 1])
        {
            res = maxElement(arr, low, mid - 1);
            if (res == -1)
                return -1;
            else
                return res;
        }
    }

    return -1;
}
int main()
{
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    maxElement(arr, 0, n - 1);
}