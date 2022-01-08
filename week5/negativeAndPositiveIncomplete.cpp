#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
            ++neg;

        if (arr[i] > 0)
            ++pos;
    }
   
}