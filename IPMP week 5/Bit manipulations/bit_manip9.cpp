#include <bits/stdc++.h>
using namespace std;
int right_pos(int n)
{
    //return log2((n^(n-1))+1);
    return log2((n^(n-1)))+1;
}
int main()
{
    int n;
    cin>>n;
    cout<<right_pos(n);
    return 0;
}
