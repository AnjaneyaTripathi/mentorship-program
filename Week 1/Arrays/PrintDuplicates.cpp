#include<bits/stdc++.h>
using namespace std;
void printduplicate(int a[], int n)
{
    int i;
    cout<<"The repeating elements are "<<endl;
    for(i=0;i<n;i++)
    {
        if(a[abs(a[i])]>0)
        a[abs(a[i])]=-a[abs(a[i])];
        else
        cout<<abs(a[i])<<" ";
    }
}
int main()
{
    int a[100],n,i;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the elements of the array (0 to n-1) ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printduplicate(a,n);
    return 0;
}
