#include <bits/stdc++.h>
using namespace std;
 
int largest(int arr[], int n)
{
    int i;
     
    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 
int main()
{
    int n, arr[]
    cin>>n
    for(int i=0; i<n; i++)cin>>arr[i];
    cout << "Largest in given array is "
         << largest(arr, n);
    return 0;
}
