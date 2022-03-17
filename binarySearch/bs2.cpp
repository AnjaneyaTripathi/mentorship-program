#include<bits/stdc++.h>
using namespace std;

int binSearch(int l, int r, int arr[], int key){
    if(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]==key){
            return mid;
        }

        if(key>arr[mid]){
            return binSearch(mid+1,r,arr,key);
        }
        else{
            return binSearch(l,mid-1,arr,key);
        }

    }
    return -1;
}

int pivSearch(int l, int r, int arr[]){
    if(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid]>arr[mid+1]){
            return mid;
        }

        if(arr[mid+1]>arr[mid] && arr[mid]<arr[l]){
            return pivSearch(l,mid-1,arr);
        }
        else if(arr[mid+1]>arr[mid] && arr[mid]>arr[l]){
            return pivSearch(mid+1,r,arr);
        }

    }
    return -1;
}




int main(){
    int arr[10]={4,5,6,7,8,9,1,2,3,4};
    int piv, ans1, ans2;
    piv = pivSearch(0, 9, arr);
    ans1 = binSearch(0, piv, arr, 6);
    ans2 = binSearch(piv+1, 9, arr, 6);
    if(ans1!=-1){
        cout<<ans1;
    }
    else if(ans2!=-1){
        cout<<ans2;
    }
    else{
        cout<<"-1";
    }
}
