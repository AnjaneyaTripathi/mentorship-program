#include<bits/stdc++.h>
using namespace std;
int isPalindrome(int n)
{
    int rev,num;
    rev=0;
    num=n;
    while(n!=0)
    {   
        rev=(rev*10) + (n%10);
        n=n/10;
    }
    if(num==rev)
    {
        return 1;
    }    
    else
    {
        return 0;
    }    
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    while(!isPalindrome(n))
    {
        n=n+1;
    }
    cout<<"Next Palindrome is "<<n;
}
