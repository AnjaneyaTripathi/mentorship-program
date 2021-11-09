#include<iostream>
using namespace std;
bool isMajorityelement(int a[100], int n, int key)
{
  if(key==a[n/2])
  {
      return true;
  }
  else
      return false;
}
int main() 
{ 
    int a[100],n,i,x;
    cout<<"Enter the size of the array ";
    cin>>n;
    cout<<"Enter the elements of the array ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to check if it is majority element ";
    cin>>x;
     if(isMajorityelement(a,n,x))
     {
         cout<<x<<" is a majority element ";
     }
     else 
     cout<<x<<" is not majority element ";
    return 0;
}
