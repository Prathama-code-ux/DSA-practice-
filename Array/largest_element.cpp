#include <iostream>
using namespace std;


int secondLargest(int arr[],int n){
    int largest=arr[0];
    int secondLargest=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]<largest && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int minElement(int arr[],int n){
    int min=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int largestElement(int arr[],int n){
    int max=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={10,34,65,65,32,32,12,89,89};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    return 0;
}