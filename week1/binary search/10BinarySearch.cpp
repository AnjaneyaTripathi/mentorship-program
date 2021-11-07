#include <iostream>
using namespace std;
int *merge(int c[], int a[], int b[], int n)
{
    int i, j, k;
    for (k = 0, j = 0, i = 0; k < 2 * n && i < n && j < n; k++)
    {
        if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
        }
        else if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = a[i];
            c[k + 1] = b[j];
            k++;
            i++;
            j++;
        }
    }
    while (k < 2 * n && j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    while (k < 2 * n && i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    return c;
}
int main()
{
    int n, i;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of first array:" << endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the elements of second array:" << endl;
    for (i = 0; i < n; i++)
        cin >> b[i];

    int *c = (int *)malloc(2 * n * sizeof(int));
    c = merge(c, a, b, n);
    int median = (c[n - 1] + c[n]) / 2;
    cout << "Median is " << median << endl;
}