#include <bits/stdc++.h>
using namespace std;
void heapsort(int arr[],int n)
{
    //build max heap function
    for(int i=n/2 - 1;i>=0;i--)
    {
        int j = 2*i + 1;
        while(j<n-1)
        {
            if(arr[j]<arr[j+1])
            {
                j = j+ 1;
            }
            if(arr[j]>arr[i])
            {
                swap(arr[j],arr[i]);
                i = j;
                j = 2*i + 1;
            }else{
                break;
            }
        }
    }
    for(int i = n-1;i>0;i--)
    {
        swap(arr[i],arr[0]);
        int j = 1;
        int k = 0;
        while(j<i-1)
        {
            if(arr[j]<arr[j+1])
            {
                j = j+ 1;
            }
            if(arr[j]>arr[k])
            {
                swap(arr[j],arr[k]);
                k = j;
                j = 2*k + 1;
            }else{
                break;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,n);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
