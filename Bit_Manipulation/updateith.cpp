#include <iostream>
using namespace std;

int updateith(int num,int i,int val){
    num=num & ~(1<<i);
    num=num|(val<<i);
    cout<<num<<endl;
}

int main(){
    int num,i,val;

    cout<<"Enter number:"<<endl;
    cin>>num;
    cout<<"Enter i:"<<endl;
    cin>>i;
    cout<<"Enter val:"<<endl;
    cin>>val;
    updateith(num,i,val);

    return 0;
}