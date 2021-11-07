#include<iostream>
using namespace std;
int main(){
     cout << "Enter the size of array" << endl;
    int n,i;
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of the array:" << endl;
    for ( i = 0; i < n; i++)
        cin >> arr[i];

        
    for( i = 0; i < n-1; i++){
 if(arr[i] >arr[i+1])break;
    }
    cout<<"Maximum element is "<<arr[i]<<endl;
}