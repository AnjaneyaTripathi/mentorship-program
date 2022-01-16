#include<bits/stdc++.h>
using namespace std;
int add(int x, int y)
{
    while(y!=0)
    { 
        int carry = x & y;
        x = x^y;
        y = carry << 1;
    }    
    return x;
}
int main()
{
    int a=3,b=2;
    cout<<add(a,b);
}
