#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:"<<endl;
    cin>>num;

    if((num&1)==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
    return 0;
}