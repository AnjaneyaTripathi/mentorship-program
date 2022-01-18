#include <bits/stdc++.h>
using namespace std;
void sort012(int a[], int n)
    {
        // coode here
        int c0 = 0;
        int c1 = 0;
        int c2 = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]==0){
                c0++;
            }else if(a[i]==1){
                c1++;
            }else if(a[i]==2){
                c2++;
            }
        }
        int i = 0;
        while(c0>0)
        {
            a[i++] = 0;
            c0--;
        }
        while(c1>0)
        {
            a[i++] = 1;
            c1--;
        }
        while(c2>0){
            a[i++] = 2;
            c2--;
        }
    }
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
