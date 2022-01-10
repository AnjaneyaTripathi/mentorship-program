#include <bits/stdc++.h>
using namespace std;
void L_rotate(unsigned int n,int k)
{
    unsigned int siz = sizeof(n)*8;
    cout<<((n<<k)|(n>>(siz-k)))<<endl;
}
void R_rotate(unsigned int n,int k)
{
    unsigned int siz = sizeof(n)*8;
    cout<<((n>>k)|(n<<(siz-k)))<<endl;
}
int main()
{
    unsigned int n;
    int k;
    cin>>n>>k;
    cout<<"on right rotate : ";
    R_rotate(n,k);
    cout<<"on left rotate : ";
    L_rotate(n,k);
    return 0;
}
