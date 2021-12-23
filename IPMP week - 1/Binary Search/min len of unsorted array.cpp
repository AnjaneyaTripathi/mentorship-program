#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    int e = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1]){
            s = i;
            break;
        }
    }
    for(e=n-1;e>0;e--)
    {
        if(arr[e]<arr[e-1]){
            break;
        }
    }
    int min = arr[s],max = arr[s];
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0; i < s; i++)
    {
        if(arr[i] > min)
        {
            s = i;
            break;
        }    
    }
    for(int i = n -1; i >= e+1; i--)
    {
        if(arr[i] < max)
        {
            e = i;
            break;
        }
    }
    cout<<s<<" "<<e<<endl;
}
