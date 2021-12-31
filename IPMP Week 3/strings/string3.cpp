#include <bits/stdc++.h>
using namespace std;
void findcount(string str)
{
    pair<int,int> v[256];
    for(int i=0;i<str.length();i++)
    {
        (v[str[i]].first)++;
        v[str[i]].second = i;
    }
    int r = INT_MAX;
    for(int i=0;i<256;i++)
    {
        if(v[i].first == 1)
        {
            r = min(r,v[i].second);
        }
    }
    cout<<str[r];
}
int main()
{
    string s;
    cin>>s;
    findcount(s);
    return 0;
}
