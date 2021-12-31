#include <bits/stdc++.h>
using namespace std;
int part(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while(i<j)
    {
        while(arr[i]<=pivot){
            i++;}
        while(arr[j]>pivot)
            {j--;}
        if(i<j){
            swap(arr[i],arr[j]);}
    }
    swap(arr[j],arr[l]);
    return j;
}
/*int part1(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i = l;
    int j = h;
    while(j>i)
    {
        while(arr[i]<=pivot)
    }
}
int part(int a[],int start,int end)

{

int pivot=a[start],p1=start+1,i,temp;

for(i=start+1;i<=end;i++)
{

if(a[i]<pivot)
    {
        if(i!=p1)
      {
            temp=a[p1];
            a[p1]=a[i];
            a[i]=temp;
      }    p1++;
    }
}

        a[start]=a[p1-1];
        a[p1-1]=pivot;

return p1-1;
}*/
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int par = part(arr,l,h);
        quicksort(arr,l,par-1);
        quicksort(arr,par+1,h);
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
    quicksort(arr,0,n-1);
    cout<<"sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
