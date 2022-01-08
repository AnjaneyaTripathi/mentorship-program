#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the numbers i.e. 0, 1 or 2" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int count1 = 0, count2 = 0, count0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            ++count0;
        else if (arr[i] == 1)
            ++count1;
        else if (arr[i] == 2)
            ++count2;
    }
    for (int i = 0; i < n; i++)
    {
        if (i < count0)
            arr[i] = 0;
        else if (i < count1 + count0&&i>=count0)
            arr[i] = 1;
        else if(i>=count1+count0)
            arr[i] = 2;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}