#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<"no";
    }else{
        if(!(n&(n-1))){
            cout<<"yes";
        }else{
            cout<<"no";
        }
    }
    return 0;
}
