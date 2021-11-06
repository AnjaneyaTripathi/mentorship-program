#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int num)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if ((arr[mid] == num)&&(arr[mid-1]<num))
            return mid;

        if (arr[mid] > num)
            return binarySearch(arr, l, mid - 1, num);

        return binarySearch(arr, mid + 1, r, num);
    }

    return -1;
}

int main(){

    int arr[]={1,2,3,3,4,4,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int num = 4;
    if (arr[(binarySearch(arr,0,num-1,num)+size/2)]==num){
        cout<<"It is a majority element";
    }
    else{
        cout<<"It is not majority element";
    }
}
