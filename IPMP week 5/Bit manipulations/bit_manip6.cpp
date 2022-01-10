#include <bits/stdc++.h>
using namespace std;
int absolute(int n)
{
    int siz = sizeof(n)*8;
    int r = (n>>(siz-1));
    return ((n+r)^r);
}
int main()
{
    int n;
    cin>>n;
    cout<<absolute(n)<<endl;
    return 0;
}
