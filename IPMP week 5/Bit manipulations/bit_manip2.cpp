#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void print_reverse(unsigned int n)
{
    unsigned int reverse = n;
    unsigned int c = sizeof(n)*8 - 1;
    n = (n>>1);
    while(n)
    {
        reverse = (reverse<<1);
        reverse = (reverse|n);
        n = (n>>1);
        c--;
    }
    reverse = (reverse<<c);
    cout<<reverse;
}
int main()
{
    unsigned int n;
    cin>>n;
    print_reverse(n);
    return 0;
}
