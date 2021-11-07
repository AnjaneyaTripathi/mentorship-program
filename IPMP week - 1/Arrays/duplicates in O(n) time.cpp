#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p[n]={0};
    for(int i=0;i<n;i++){
        p[arr[i]] = 0;
    }
    int c = 0;
    int q[c];
    for(int i=0;i<n;i++){
        p[arr[i]]++;
        if(p[arr[i]]>1 && p[arr[i]]<3){
            q[c]=arr[i];
            c++;
        }
    }
    for(int i=0;i<c;i++){
        cout<<q[i]<<" ";
    }
    return 0;
}
