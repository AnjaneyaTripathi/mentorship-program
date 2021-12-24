#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low = 0;
    int high = 1;
    while(arr[high]!=1){
        low = high;
        high = 2*high;
    }
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid]==1 && arr[mid-1]==0){
            cout<<mid;
            break;
        }
        if(arr[mid]<1){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
}
