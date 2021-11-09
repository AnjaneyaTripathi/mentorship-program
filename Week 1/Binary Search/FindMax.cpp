#include<bits/stdc++.h>
using namespace std;
int FindMax(int a[100], int low, int high)
{
    if(low==high)
    {
        return a[low];
    }
    if((high==low+1) && a[low]>=a[high])
    {
        return a[low];
    }
    if((high==low+1) && a[high]>a[low])
    {
        return a[high];
    }
    int mid=(low+high)/2;
    if(a[mid]>a[mid+1] && a[mid]>a[mid-1])
    {
        return a[mid];
    }
    if(a[mid]>a[mid+1] && a[mid]<a[mid-1])
    {
        return FindMax(a,low,mid-1);
    }
    else
    {
        return FindMax(a,mid+1,high);
    }    
}
int main()
{
    int a[100],n,i;
    cout<<"Enter the number of elements in array ";
    cin>>n;
    cout<<"Enter the elements of the array (first increasing then decreasing) ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The maximum element is "<<FindMax(a,0,n-1);
    return 0;
}
