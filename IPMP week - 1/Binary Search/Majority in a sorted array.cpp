#include <bits/stdc++.h>
using namespace std;
bool Majority(int arr[],int n,int key)
{
    int l = 0;
    int r = n - 1;
    int ind;
    while(l<=r)
    {
        int mid = l + (r - l)/2;
        if(arr[mid]==key)
        {
            ind = mid;
            break;
        }else if(arr[mid]<key){
            l = mid + 1;
        }else if(arr[mid]>key){
            r = mid - 1;
        }
    }
    if(arr[ind] == arr[ind + n/2]){
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"enter no of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array in a sorted manner: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;
    if(Majority(arr,n,key))
    {
        cout<<"Yes there is majority element in array";
    }else{
        cout<<"There is no majority element in array";
    }
    return 0;
}
