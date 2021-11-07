#include <iostream>
using namespace std;
int check(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        if (a[i] > 0)
            return i + 1;
    return i + 1;
}
int smallestPositiveNumber(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (a[i] <= n)
            {
                a[a[i] - 1] = -1;
            }
        }
    }
    return check(a, n);
}

int main()
{

    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *array = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i] <= 0)
        {
            array[i] = n + 1;
        }
    }

    cout << "The smallest missing positive number is " << smallestPositiveNumber(array, n) << endl;
}