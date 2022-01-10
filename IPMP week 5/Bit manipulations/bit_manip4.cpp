#include <bits/stdc++.h>
using namespace std;
int no_of_flips(int a,int b)
{
    int c = 0;
    while(a||b){
        int i = (a&1);
        int j = (b&1);
        if(i!=j){
            c++;
        }
        a = (a>>1);
        b = (b>>1);
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<no_of_flips(a,b);
    return 0;
}
