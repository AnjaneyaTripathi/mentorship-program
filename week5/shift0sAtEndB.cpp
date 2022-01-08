// Extra Space O(1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int nonZeroCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[nonZeroCount] = arr[i];
            ++nonZeroCount;
        }
    }
    for (int i = nonZeroCount; i < n; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}