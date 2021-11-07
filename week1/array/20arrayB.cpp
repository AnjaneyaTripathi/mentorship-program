#include <iostream>
using namespace std;
void traverse(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 2 * size)
        {
            if (count == 0)
            {
                cout << "The duplicate elements are: " << i;
                count = 1;
                continue;
            }
            cout << " " << i;
        }
    }
    if (count == 0)
        cout << "No duplicates found!!";
}
void duplicateAlgo(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {

            arr[arr[i]] += size;
        }
    }
    traverse(arr, size);
}
int main()
{
    int i, size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int *arr = (int *)malloc(size * sizeof(int));
    for (i = 0; i < size; i++)
        cin >> arr[i];
    duplicateAlgo(arr, size);
}
