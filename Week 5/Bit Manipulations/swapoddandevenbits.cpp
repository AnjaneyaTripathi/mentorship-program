#include<bits/stdc++.h>
using namespace std;
int swapoddandevenbits(int x)
{
    int evenbits = x & 0xAAAAAAAA;
    int oddbits = x & 0x55555555;
    evenbits>>=1;
    oddbits<<=1;
    return(evenbits | oddbits);
}
int main()
{
    int n=2;
    cout<<swapoddandevenbits(n);
}
