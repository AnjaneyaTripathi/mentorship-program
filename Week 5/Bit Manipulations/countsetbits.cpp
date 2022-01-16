#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n)
{
    int count=0;
    while(n)
    {
        count+=n & 1;
        n>>=1;
    }
    return count;
}
int main()
{
    int n=7;
    cout<<countsetbits(n);
    return 0;
}
