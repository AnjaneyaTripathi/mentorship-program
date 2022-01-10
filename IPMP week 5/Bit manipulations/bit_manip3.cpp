#include <bits/stdc++.h>
using namespace std;
int no_of_bits(int n)
{
    int count = 0;
    while(n)
    {
        if((n&1)){
            count++;
        }
        n = (n>>1);
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<no_of_bits(n);
    return 0;

}
