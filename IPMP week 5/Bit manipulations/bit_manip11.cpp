#include <bits/stdc++.h>
using namespace std;
void bit_pos(int n)
{
    if(n>0)
    {
        if(ceil(log2(n))==floor(log2(n)))
        {
            cout<<log2(n)+1;
        }else{
            cout<<"-1";
        }
    }else{
        cout<<"-1";
    }
}
int main()
{
    int n;
    cin>>n;
    bit_pos(n);
    return 0;
}
