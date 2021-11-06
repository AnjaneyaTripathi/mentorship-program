#include <iostream>
using namespace std;
bool allnine(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=9){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(allnine(arr,n)){
        for(int i=0;i<=n;i++){
            if(i==0||i==n){
                cout<<"1 ";
            }else{
                cout<<"0 ";
            }
        }
    }else{
        int mid = n/2;
        int i = mid - 1;
        int j = (n%2)? mid+1:mid;
        int a = i;
        int b = j;
        while(i>=0 && arr[i]==arr[j]){
            a = i--;
            b = j++;
        }
        if(n%2 == 0 && (i<0 || arr[i]<arr[j])){
            i = mid -1;
            int add = 1;
            j = mid;
            while(i>=0){
                arr[i] = arr[i] + add;
                add = arr[i]/10;
                arr[i] = arr[i]%10;
                arr[j++] = arr[i--];
            }
        }
        if(n%2==1 && (i<0 || arr[i]<arr[j])){
            i = mid -1;
            int add = 1;
            j = mid + 1;
            arr[mid] += add;
            add = arr[mid]/10;
            arr[mid] = arr[mid]%10;
            while(i>=0){
                arr[i] = arr[i] + add;
                add = arr[i]/10;
                arr[i] = arr[i]%10;
                arr[j++] = arr[i--];
            }
        }
        while(a>=0){
            arr[b]=arr[a];
            b++;
            a--;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
