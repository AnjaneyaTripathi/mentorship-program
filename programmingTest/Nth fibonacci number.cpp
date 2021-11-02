#include<iostream>
using namespace std;
int main(){
    int n;
    unsigned long long int a1=0,a2=1,a3=0;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    
    if(n==2)
    {cout<<1;
        return 0;
    }
    for(int i=2;i<n;i++){
        a3=a1+a2;
        a1=a2;
        a2=a3;
    }
    cout<<a3;
}