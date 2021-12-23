#include <iostream>
#include <string>
using namespace std;
void removeChars(string s1,int a[]){

string out;
int i = 0;
while(i<s1.length()){
    if(a[(int)(s1[i])]==1){
        ++i;
        continue;
    }
else{
    out+=s1[i];
    i++;
}
}

cout<<"The final answer is: "<<out<<endl;
}

int* getArray(string s,int a[]){
int i=0;
    while(i<s.length()){
        a[(int)s[i]]=1;
        i++;
    }
    return a;
}

int main()
{cout<<"Enter the first string: ";
string s1,s2;
cin>>s1;
cout<<"Enter the second string: ";
cin>>s2;
int *arr=(int *)calloc(256,sizeof(int));
arr=getArray(s2,arr);
removeChars(s1,arr);

}