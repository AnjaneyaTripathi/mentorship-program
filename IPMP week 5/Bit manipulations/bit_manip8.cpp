#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int siz = sizeof(a)*8;
    int c = 0;
    unsigned int carry = 0;
    int i = 0;
    while(b!=0)
    {
        carry = (a&b);
        a = (a^b);
        b = (carry<<1);
    }
    cout<<a<<endl;
    return 0;
}

