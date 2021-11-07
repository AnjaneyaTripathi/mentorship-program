#include<iostream>
using namespace std;
int main()
{
    int n,val;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr=(int*)calloc(n , sizeof(int));
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++){cin>>val;
    if(i==0){
        arr[i]=val;
        continue;
    }
    arr[i]=arr[i-1]+val;
    }
  
}