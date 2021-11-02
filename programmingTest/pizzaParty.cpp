#include<iostream>
using namespace std;
int find(unsigned long long int a[],int l,int h,int q){
int mid=(l+h)/2;
if(h==l){
    return h;
}
else if(q==a[mid]){
    return mid;
}
else if(q>a[mid]){
     return find(a,mid+1,h,q);
}
else if(q<a[mid]){
     return find(a,l,mid,q);
}

}


int main(){
    int n,q,q1,sum,N;
    cin>>n>>q;
    unsigned long long int *a=(unsigned long long int*)calloc(n,sizeof(unsigned long long int));
    for(int i=0;i<n;i++)
    {cin>>N;
      if(i==0){
          a[i]=N;
      }
      else a[i]=N+a[i-1];}
    for(int i=0;i<q;i++){
        cin>>q1;
        cout<<find(a,0,n,q1)+1<<endl;
          }
        }

