#include <iostream>
using namespace std;

void printNo(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool checkPallindrome(int a[], int n)
{
    int mid;
    if (n % 2 == 0)
        mid = (n - 1) / 2;
    else
        mid = n / 2;
    for (int i = 0; i <= mid; i++)
    {
        if (a[i] != a[n - 1 - i])
            return false;
    }
    return true;
}
void copyElements(int a[], int n, int mid)
{
    for (int i = mid + 1; i < n; i++)
    {
        a[i] = a[n - 1 - i];
    }
    printNo(a, n);
}
void nextPallindrome(int a[], int n, int mid)
{
    int x = a[mid] + 1;
    a[mid] = x % 10;
    for (int i = mid - 1; i >= 0 && x / 10 != 0; i--)
    {
        a[i] = a[i] + (x / 10);
        x = a[i];
        a[i] = a[i] % 10;
    }
    copyElements(a, n, mid);
}
int main()
{
    int n, check9 = 0, i;
    cout << "Enter the length of the number: " << endl;
    cin >> n;
    int *a = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != 9)
            check9 = 1;
    }
    printNo(a, n);
    if (check9 == 0)
    {
        int *out = (int *)calloc(n + 1, sizeof(int));
        out[0] = 1;
        out[n] = 1;
        printNo(out, n + 1);
        return 0;
    }
    if (checkPallindrome(a, n))
    {
        int mid;
        if (n % 2 == 0)
        {
            mid = (n - 1) / 2;
        }
        else
            mid = n / 2;
        nextPallindrome(a, n, mid);
        printNo(a, n);
        return 0;
    }
    else
    {
        int mid;
        if (n % 2 == 0)
        {
            mid = (n - 1) / 2;
        }
        else
            mid = n / 2;
        for (i = 0; i <= mid; i++)
        {
            if (a[i] < a[n - 1 - i])
            {
                nextPallindrome(a, n, mid);
                break;
            }
        }
        if (i == mid + 1)
        {
            copyElements(a, n, mid);
        }
    }
}