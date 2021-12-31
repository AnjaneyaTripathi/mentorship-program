#include <iostream>
using namespace std;
void printreverse(string s,int i)
{
    if(s[i]=='\0'){
        return;
    }
    printreverse(s,++i);
    cout<<s[i-1];
}
int main()
{
    string s;
    cin>>s;
    printreverse(s,0);
    return 0;
}
