#include <bits/stdc++.h>
using namespace std;
string s = "";
void printpower(char set[],int n,int ind)
{
    if(ind==n){
        return;
    }
    cout<<s<<endl;
    for(int i = ind+1;i<n;i++)
    {
        s = s + set[i];
        printpower(set,n,i);
        s.erase(s.size()-1);
    }
}
int main()
{
    int n;
    cin>>n;
    char set[n];
    for(int i=0;i<n;i++)
    {
        cin>>set[i];
    }
    printpower(set,n,-1);
    return 0;
}
