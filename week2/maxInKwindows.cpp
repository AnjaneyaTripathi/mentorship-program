#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    int n, ele,k;

    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr=(int *)malloc(n * sizeof(int));
    stack<int> s1,s2;
    cout<<"Enter the elements"<<endl;
    for (int i = 0; i < n; i++)
    {cin>>arr[i];
    }
    for(int i=n-1; i>=0; i--){
        s1.push(arr[i]);
    }
cout<<"Enter the size of sub array: ";     
cin>>k;

while(s1.empty()==false){

}




}