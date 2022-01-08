#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size,powsetsize;
    cout<<"Enter the size of the set "<<endl;
    cin>>size;
    char set[size];
    cout<<"Enter the elements of the set "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>set[i];
    }
    powsetsize=pow(2,size);
    for(int i=0;i<powsetsize;i++)
    {
        for(int j=0;j<size;j++)
        { 
            if(i&(1<<j))
            {
                cout<<set[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
