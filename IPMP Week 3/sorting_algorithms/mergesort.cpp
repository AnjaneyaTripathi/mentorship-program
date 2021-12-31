#include <bits/stdc++.h>
using namespace std;
void mrg(int arr[],int l,int mid,int h)
{
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = l;
    int g = mid+1;
    int k = l;
    int *b = (int*)calloc(n,sizeof(int));
    while(i<=mid && g<=h)
    {
        if(arr[i]<arr[g])
        {
            b[k] = arr[i];
            i++;
        }else{
            b[k] = arr[g];
            g++;
        }
        k++;
    }
    if(i>mid){
        while(g<=h){
            b[k++] = arr[g++];
        }
    }else{
        while(i<=mid){
            b[k++] = arr[i++];
        }
    }
    for(int i = l;i<=h;i++)
    {
        arr[i] = b[i];
    }
}
void mergesort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid = (l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        mrg(arr,l,mid,h);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
