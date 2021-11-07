#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<n; i++)cin>>arr[i];
    int max=arr[0],min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){min=arr[i];}
        if(arr[i]>max){max=arr[i];}
    }
    int start=0,end=n-1;
    for(int i=start; i<end; i++){
        if()
    }

}