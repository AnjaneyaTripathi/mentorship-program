#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    /*int i = 0;
    while(!(n&1))
    {
        i++;
        n = (n>>1);
    }
    n = n-1;
    n = (n<<i);*/
    cout<<(n&(n-1))<<endl;

    return 0;
}
