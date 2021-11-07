#include <bits/stdc++.h>
using namespace std;
bool findseq(int arr[],int n){
    int mini = arr[0];
    int maxi = INT_MIN;
    int str = mini;
    int seq = 1;
    for(int i=1;i<n;i++){
        if(arr[i]==mini){
            continue;
        }else if(arr[i]<mini){
            mini = arr[i];
            if(seq<2){
                str = mini;
            }
            continue;
        }else if(arr[i]<maxi){
            maxi = arr[i];
        }else if(arr[i]>maxi){
            seq++;
            if(seq==3){
                cout<<str<<" "<<maxi<<" "<<arr[i];
                return true;
            }
            maxi = arr[i];
        }
    }
    return false;
}
int main(){
    int n;
    cout<<"enter no of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of an array: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(findseq(arr,n)){}else{
        cout<<"No such triplet found";
    }

    return 0;
}
