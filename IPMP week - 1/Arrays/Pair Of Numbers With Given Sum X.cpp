#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in the set: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value of sum x: ";
    int x;
    cin>>x;
    bool fi = false;
    int a,b;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i] + arr[j] == x){
               a = arr[j];
               b = arr[i];
               fi = true;
            }
        }
    }
    if(fi){
        cout<<"yes there is a valid pair"<<endl;
        cout<<"pair is : ("<<a<<" ,"<<b<<")";
    }else{
        cout<<"There is no valid pair";
    }
    return 0;
}
