#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = (int *)malloc(n * sizeof(int));
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

cout<<"Enter the sum you want to find";
int x,count=0;
cin>>x;
for(int i = 0; i < n-1; i++){
    for(int j = i+1; j ++){
        if(arr[j] +arr[i]==x){
            count=1;
            cout<<arr[i] <<" "<<arr[j] <<endl;
        }
    }
}
if(count==0)cout<<"No numbers exist";

}