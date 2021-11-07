#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int con = 0;
    int p[con];
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p[con] = arr[i];
            con++;
        }
    }
    bool fin[con] = {false};
    for(int i=0;i<con;i++){
        fin[p[i]] = true;
    }
    int h = 0;
    for(int i=1;i<=n;i++){
        if(!fin[i]){
            h = 0;
            cout<<i<<endl;
            break;
        }else{
            h++;
        }
    }
    if(h!=0){
        cout<<n+1;
    }
    return 0;
}
