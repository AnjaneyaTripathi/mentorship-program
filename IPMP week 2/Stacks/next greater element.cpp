#include <bits/stdc++.h>
using namespace std;
void NGE(int arr[],int n)
{
    stack<int> s;
    s.push(0);
    int g[n];
    for(int i=0;i<n;i++)
    {
        g[i] = -1;
    }
    for(int i=0;i<n;i++)
    {
        while(!s.empty() && i<n-1 && arr[s.top()]<arr[i+1])
        {
            g[s.top()] = arr[i+1];
            s.pop();
        }
        s.push(i+1);
    }
    for(int i=0;i<n;i++)
    {
        cout<<g[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter no of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in an array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    NGE(arr,n);
}
