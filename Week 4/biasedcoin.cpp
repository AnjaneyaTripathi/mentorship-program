#include<bits/stdc++.h>
using namespace std;
int foo()
{  
   int X;
   X=rand()%100;
   if(X<=60)
   {
       return 0;
   }
   else
   return 1;
} 
int faircoin()  
{   
    int a,b;
    a=foo();
    b=foo();
    if(a==0 && b==1)
    return 1;
    if(a==1 && b==0)
    return 0;
    else 
    return faircoin();
}
int main()
{   
    for(int i=0;i<10;i++)
    cout<<faircoin()<<endl;
}
