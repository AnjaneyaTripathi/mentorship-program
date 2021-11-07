#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of array"<<endl;
    int n;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++)cin>>arr[i];
    int x=0;
    for(int i=0; i<n; i++)x=x^arr[i];
    cout<<"The odd element of array is "<<x<<endl; 
}

//best approach