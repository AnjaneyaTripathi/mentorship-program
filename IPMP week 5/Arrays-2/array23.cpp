#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix will be\n";
    for(int i = 0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int t = 0,d = r-1,l = 0,ri = c-1;
    int path = 0;
    cout<<"the spiral path will be : ";
    while(t<=d && l<=ri)
    {
        if(path==0){
            for(int i = l;i<=ri;i++){
                cout<<arr[t][i]<<" ";
            }
            t++;
        }else if(path==1){
            for(int i = t;i<=d;i++)
            {
                cout<<arr[i][ri]<<" ";
            }
            ri--;
        }else if(path==2){
            for(int i = ri;i>=l;i--)
            {
                cout<<arr[d][i]<<" ";
            }
            d--;
        }else if(path==3){
            for(int i = d;i>=t;i--){
                cout<<arr[i][l]<<" ";
            }
            l++;
        }
        path = (path+1)%4;
    }
    return 0;
}
