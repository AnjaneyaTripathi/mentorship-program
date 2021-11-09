#include<bits/stdc++.h>
using namespace std;
void UnsortedArray(int a[100], int n)
{
    int s=0, e=n-1, max, min,i;
    for(s=0;s<=n-1;s++)
    {
        if(a[s]>a[s+1])
        break;
    }
    if(s==n-1)
    {
        cout<<"The array is already sorted ";
        return;
    }
    for(e=n-1;e>0;e--)
    {
        if(a[e-1]>a[e])
        break;
    }
    max=a[s], min=a[s];
    for(i=s+1;i<=e;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }    
    }
    for(i=0;i<s;i++)
    {
        if(a[i]>min)
        {
            s=i;
            break;
        }
    }
    for(i=n-1;i>=e+1;i--)
    {
        if(a[i]<max)
        { 
            e=i;
            break;
        }    
    }
    cout<<"The unsorted subarray which when sorted makes the array sorted is from "<<s<<" to "<<e;
}
int main()
{
    int a[100],n,i;
    cout<<"Enter the number of elements in array ";
    cin>>n;
    cout<<"Enter the elements of the array  ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    UnsortedArray(a,n);
    return 0;
}
