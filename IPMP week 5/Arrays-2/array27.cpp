#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b)
{
    if(a.first!=b.first)
    {
        if(a.first>b.first){
            return true;
        }
    }
    if(a.first==b.first){
        if(a.second<b.second)
        {
            return true;
        }
    }
    return false;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    map<int,int> mp;
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    vector<pair<int,int>> v;
	    for(auto i : mp)
	    {
	        int h = i.first;
	        int k = i.second;
	        v.push_back(make_pair(k,h));
	    }
	    sort(v.begin(),v.end(),compare);
	    for(auto i : v){
	        for(int j = 0;j<i.first;j++){
	            cout<<i.second<<" ";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
