#include <iostream>
#include <vector>
using namespace std;

int reverse(int n){
    if(n==1){
        return 1;
    }
    cout<<n<<endl;
    reverse(n-1);
}

int sum(int n){
    if (n==0){
        return 0;
    }
    return n+sum(n-1);
}

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

bool isSorted(int arr[],int n,int i){
    if(i==(n-1)){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}


int main(){
    int arr[]={1,2,3,4,5};
    cout<<reverse(5)<<endl;
    cout<<sum(5)<<endl;
    cout<<fib(5)<<endl;
    cout<<isSorted(arr,5,0)<<endl;
    return 0;
}