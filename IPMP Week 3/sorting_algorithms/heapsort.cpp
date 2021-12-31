#include <bits/stdc++.h>
using namespace std;
void maxheapify(int arr[],int i,int n)
{
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i;
    if(l<n && arr[l]>arr[largest])
    {
        largest = l;
    }
    if(r<n && arr[r]>arr[largest])
    {
        largest = r;
    }
    if(largest!=i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxheapify(arr,largest,n);
    }
}
void buildmaxheap(int arr[],int n)
{
    for(int i=n/2-1;i>=0;i--)
    {
        maxheapify(arr,i,n);
    }
}
void heapsort(int arr[],int n)
{
    buildmaxheap(arr,n);
    for(int i=n-1;i>0;i--)
    {
        int temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        maxheapify(arr,0,i);
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
