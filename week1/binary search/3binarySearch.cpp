#include<iostream>
using namespace std;
int binarySearch(int arr[],int low,int high,int x){
  int mid=(low+high)/2;
  int y;
  if(low<high){
      y=binarySearch(arr,low,mid,x);
      if(y!=-1)return y;
      y=binarySearch(arr,mid+1,high,x);
      if(y!=-1)return y;
  }  
  if(low==high){
      if(arr[low]==x) return low;
      else return -1;
  }
  else return -1;
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int *arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements of sorted array:"<<endl;
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<"Enter the element to be checked as majority:";
    int x;
    cin>>x;
    int z=binarySearch(arr,0,n-1,x);
    if(z<=n/2 &&arr[z+(n/2)]==x&&n%2!=0) cout<<x<<" occurs more than "<<n/2<<" times";
    else if(z<n/2&&arr[z+(n/2)==x]&&n%2==0) cout<<x<<" occurs more than "<<n/2<<" times";
    else cout<<x<<" does not occur more than "<<n/2<<" times";
}