#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)calloc(n, sizeof(int));
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[arr[i]]++;
    }
    int check = 0;

    for (i = 0; i < n; i++)
    {
        if (arr2[arr[i]] > 1)
        {
            if (check == 0)
                cout << "The repeated elements of the array are: " << endl;
            cout << arr[i] << ' ';
            check = 1;
        }
    }
    if (check == 0)
        cout << "No repeated elements" << endl;
}

//extra space is O(n)!!!!