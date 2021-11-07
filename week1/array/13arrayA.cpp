

//O(n) extra space 

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the size of array: ";
    int n;
    cin >> n;
    int *a = (int *)malloc(n * sizeof(int));
    int *min = (int *)malloc(n * sizeof(int));
    int *max = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            min[i] = a[i];
            continue;
        }
        if (min[i - 1] > a[i])
        {
            min[i] = a[i];
        }
        else
            min[i] = min[i - 1];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (i == n - 1)
        {
            max[i] = a[i];
            continue;
        }
        if (a[i] > max[i + 1])
        {
            max[i] = a[i];
        }
        else
            max[i] = max[i + 1];
    }
   
    for (int i = 0; i < n; i++)
    {
        if (a[i] > min[i]&&a[i]<max[i])
        {
           cout<<"The sequence is "<<min[i]<<" "<<a[i]<<" "<<max[i]<<endl;
           return 0;
        }
    }
    cout<<"No triplet exists"<<endl;
}