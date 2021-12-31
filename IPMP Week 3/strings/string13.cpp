#include <bits/stdc++.h>
using namespace std;
bool check(string s1,string s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }else{
        int c[256] = {0};
        for(int i=0;i<s1.length();i++){
            c[s1[i]]++;
            c[s2[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(c[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(check(s1,s2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
