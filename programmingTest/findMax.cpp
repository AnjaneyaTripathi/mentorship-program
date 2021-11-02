#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int max;
    long long int *arr=(long long int*)malloc(n*sizeof(long long int));
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i==0){
        max=arr[0];
        }
        if(max<arr[i]){
        max=arr[i];
        }
        if(max>arr[i])
        break;
    }
    cout<<max;
}