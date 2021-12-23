#include<iostream>
using namespace std;


void merge(int arr[],int low,int mid,int high){
    int size=high-low+1;
    int *b=(int*)malloc(size*sizeof(int));
    int i=low,j=mid+1,k=0;
    while(i<=mid&&j<=high&&k<size){
        if(arr[i]>arr[j]){
            b[k]=arr[j];
            ++k;
            ++j;
    }
    else{
        b[k]=arr[i];
        ++k;
        ++i;
    }

}
while(i<=mid&&k<size){
    b[k]=arr[i];
    ++i;
    ++k;
}
while(j<=high&&k<size){
    b[k]=arr[j];
    ++j;
    ++k;

}
for(i=low;i<high;++i){
    arr[i]=b[i-low];
    // cout<<arr[i]<<' '<<b[i-low]<<endl;
}}

void mergeSort(int arr[],int low,int high){
    if(high>low){
        int mid=(high+low)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    else return;
}

int main()
{
    int n,val;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *arr=(int*)calloc(n , sizeof(int));
    cout<<"Enter the elements of array"<<endl;
    for(int i=0; i<n; i++){cin>>val;
    if(i==0){
        arr[i]=val;
        continue;
    }
    arr[i]=arr[i-1]+val;
    }
  mergeSort(arr,0,n-1);
  for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
  }
}