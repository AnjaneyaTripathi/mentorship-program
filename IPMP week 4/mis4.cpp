#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char set[n];
    for(int i = 0;i<n;i++){
        cin>>set[i];
    }
    long long int t = pow(2,n);
    for(long long int i = 0;i<t;i++){
        for(int j = 0;j<n;j++){
            if(i&(1<<j)){
                cout<<set[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
