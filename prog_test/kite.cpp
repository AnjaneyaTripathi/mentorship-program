#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=(2*n-1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
        s--;
    }
    s=1;
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=s;j++){
            cout<<"  ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"* ";
        }
        cout<<endl;
        s++;
    }
}
