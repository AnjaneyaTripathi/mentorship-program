#include <bits/stdc++.h>
using namespace std;
void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int max = 0;
        for(int j= 0;j<n-i;j++)
        {
            if(arr[j]>arr[max])
            {
                max = j;
            }
        }
        int temp = arr[max];
        arr[max] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
void selectionsort1(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j= i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
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
    selectionsort1(arr,n);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
