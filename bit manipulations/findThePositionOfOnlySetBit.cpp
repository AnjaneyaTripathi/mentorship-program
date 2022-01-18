#include<iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number: ";
cin>>n;
if(n==0){
    cout<<"No set Bit!"<<endl;
    return 0;
}
//one set bit only in perfect powers of 2
else if((n &(n-1))!=0){
    cout<<"More than one set bit"<<endl;
    return 0;
}
else{
    cout<<"Position of the only set bit is: "<<log2(n)<<endl;
}
}