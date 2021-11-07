#include<iostream>
using namespace std;
int findExact(int arr[],int n, int low, int high){
int mid= (low + high) / 2;
while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==1){
        if(low==high||arr[mid-1]==0)return mid;
        else high=mid-1;
    }
    
    else low=mid+1;
}
return mid;
}

int findFirstEncountered1(int arr[],int n){
    int low=0,high=1;
    while(arr[high]!=1&&high<n){
        low=high;
        high=2*high;
    }
   return findExact(arr,n,low,high);
}

int main(){
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<"The first occurence of 1 is: "<<findFirstEncountered1(arr,n);
}