//Extra Space O(N)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    int *aux = new int[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            aux[j] = arr[i];
            ++j;
        }
    }
    for (; j < n; j++)
    {
        aux[j] = 0;
    }
    cout << "The array after segregation is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << aux[i] << " ";
    }
}