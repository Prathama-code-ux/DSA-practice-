#include <iostream>
using namespace std;

int main(){
    int arr[]={2,2,3,3,6,6,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[j]){
            j++;
            arr[j]=arr[i];
        }
    }

    for(int i=0;i<=j;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}