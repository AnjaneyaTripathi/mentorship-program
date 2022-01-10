#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the order of the matrix: ";
    int n;
    cin>>n;
    int arr[n][n];
    cout<<"enter the elements: \n";
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"the matrix should be: \n";
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"enter the element to be search: ";
    int x;
    cin>>x;
    int i,j;
    int xpos=-1,ypos=-1;
    for(i = 0;i<n;i++)
    {
        if(arr[i][0]==x){
            break;
        }else if(arr[i][0]>x){
            i--;
            break;
        }
    }
    if(i==n && arr[n-1][n-1]>=x){
        i = i-1;
    }
    if(i!=n)
    {
        for(int k = 0;k<n;k++)
        {
        if(arr[i][k]==x){
            xpos = i;
            ypos = k;
            break;
        }
    }
    }else{
    for(j = 0;j<n;j++)
    {
        if(arr[0][j]==x)
        {
            break;
        }else if(arr[0][j]>x){
            j--;
            break;
        }
    }
    if(j==n && arr[n-1][n-1]>=x){
        j = j-1;
    }
    if(j!=n)
    {
        for(int k = 0;k<n;k++)
        {
        if(arr[k][j]==x){
            xpos = k;
            ypos = j;
            break;
        }
    }
    }
    }
    if(xpos!=-1 && ypos!=-1){
        cout<<xpos<<" "<<ypos;
    }else{
        cout<<"element not found";
    }
    return 0;
}
