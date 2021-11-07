#include <iostream>
using namespace std;
int main()
{
    int n, i, sum1 = 0;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum1 += arr[i];
    }
    int sum2 = 0, count = 0;

    for (i = 0; i < n; i++)
    {
        sum2 += arr[i];
        if (sum1 == 2 * sum2)
        {
            if (count == 0)
                cout << "Index where left-sum==right-sum are: " << endl;
            cout << "Index is: " << i << " and the value is: " << arr[i] << endl;
            count = 1;
        }
    }
    if (count == 1)
        cout << "There is no such point in the array where left-sum==right-sum" << endl;
}