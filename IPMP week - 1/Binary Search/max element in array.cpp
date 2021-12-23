#include <bits/stdc++.h>
using namespace std;
int bisearch(int arr[],int l,int r)
{
    if(l<=r){
        int mid = (l+r)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
            return bisearch(arr,l,mid-1);
        }else{
            return bisearch(arr,mid+1,r);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i = bisearch(arr,0,n-1);
    cout<<arr[i]<<endl;
    return 0;
}
