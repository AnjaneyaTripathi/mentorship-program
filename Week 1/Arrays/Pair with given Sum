#include <iostream>
using namespace std;
bool checkpairs(int a[100], int n, int sum)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                return 1;
            }
        }
    }
}
int main()
{
    int a[100],n,sum,i;
    cout<<"Enter size of array ";
    cin>>n;
    cout<<"Enter the elements of the array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the sum ";
    cin>>sum;
    if(checkpairs(a,n,sum))
    {
        cout<<"Pair exists";
    }
    else 
    cout<<"No such pair exists";
}
