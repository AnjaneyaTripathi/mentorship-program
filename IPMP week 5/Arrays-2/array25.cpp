#include <bits/stdc++.h>
using namespace std;
vector<long long int> productExceptSelf(vector<long long int> nums, int n) {

        //code here
        vector<long long int> p1,p2,product;
        for(int i = 0;i<n;i++)
        {
            p1.push_back(1);
            p2.push_back(1);
            product.push_back(0);
        }
        for(int i = 1;i<n;i++)
        {
            p1[i] = p1[i-1]*nums[i-1];
        }
        for(int i = n-2;i>=0;i--)
        {
            p2[i] = p2[i+1]*nums[i+1];
        }
        for(int i = 0;i<n;i++)
        {
            product[i] += p1[i]*p2[i];
        }
        return product;
    }
int main()
{
    int n;
    cin>>n;
    vector<long long int> v(n);
    for(int i= 0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<long long int> s = productExceptSelf(v,n);
    for(int i = 0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}
