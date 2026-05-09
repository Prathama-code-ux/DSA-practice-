#include <iostream>
using namespace std;

void subArr(int *arr,int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            // cout<<"("<< arr[start]<<","<<arr[end] << ")";
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    subArr(arr,n);
    return 0;
}