#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *a = (int *)malloc(n * sizeof(int));
    cout << "Enter the array elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int j=n-1,i=0;
    for(;j>=i;){
        if(a[i]%2==0&&a[j]%2!=0){
            i++;
            j--;
        }
        else if(a[i]%2==0&&a[j]%2==0){
            i++;
        }
        else if(a[i]%2!=0&&a[j]%2==0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
