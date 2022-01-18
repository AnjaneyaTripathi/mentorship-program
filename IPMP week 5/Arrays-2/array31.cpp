#include <bits/stdc++.h>
using namespace std;
void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int c = 0;
	    vector<int> v;
	    for(int i = 0;i<n;i++)
	    {
	        if(arr[i]!=0)
	        {
	            v.push_back(arr[i]);
	        }else if(arr[i]==0)
	        {
	            c++;
	        }
	    }
	    int i=0;
	    for(i = 0;i<v.size();i++)
	    {
	        arr[i] = v[i];
	    }
	    for(;i<n;i++ && c--)
	    {
	        arr[i] = 0;
	    }

	}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    pushZerosToEnd(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
