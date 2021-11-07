#include<iostream>
using namespace std;
int main(){
    int n,count=0;;
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        count=0;
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]){
                ++count;
            }
            if(count%2!=0){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
}

//O(n2) 

