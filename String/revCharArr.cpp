#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void revCharArr(char arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i];
    }
}

void revChar(char arr[],int n){
    int st=0,end=n-1;
    while(st<=end){
        swap(arr[st],arr[end]);
        st++;
        end--;
    }

}

int main(){
    char arr[]="code";
    revChar(arr,strlen(arr));

    cout<<arr<<endl;
    return 0;
}