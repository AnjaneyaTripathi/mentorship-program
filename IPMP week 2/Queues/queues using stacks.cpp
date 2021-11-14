#include <bits/stdc++.h>
using namespace std;
void printspan(int arr[],int n){
    stack<int> s;
    int sp[n];
    s.push(0);
    sp[0] = 1;
    for(int i=1;i<n;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            s.pop();
        }
        if(s.empty()){
            sp[i] = i+1;
        }else{
            sp[i] = i - s.top();
        }
        s.push(i);
    }
    cout<<"the span values of the stocks are: ";
    for(int i=0;i<n;i++){
        cout<<sp[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter no of days: ";
    cin>>n;
    int s[n];
    cout<<"enter the values of the stocks: "<<endl;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    printspan(s,n);
    return 0;
}
