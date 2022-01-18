#include <bits/stdc++.h>
using namespace std;
void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<pair<int,int>> v;
	    for(int i = 0;i<n;i++)
	    {
	        v.push_back(make_pair(arr[i],arr[i]%2));
	    }
	    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b)
    {
        if(a.second!=b.second)
        {
            if(a.second<b.second)
            {
                return true;
            }
        }else if(a.second==b.second){
            if(a.first<b.first){
                return true;
            }
        }
        return false;
    });
	    for(int i = 0;i<n;i++)
	    {
	       arr[i] = v[i].first;
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
        segregateEvenOdd(arr,n);
        for(int i = 0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
	    return 0;
	}
