#include <iostream>
using namespace std;

int main(){
    int arr[]={0,0,2,2,0,3,3,6,0,6,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }

    for(int i=j;i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
