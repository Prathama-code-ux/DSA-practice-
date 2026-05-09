#include <iostream>
using namespace std;

int getith(int num,int i){
    int mask;
    mask=1<<i;
    if(!(num&mask)){
        return 0;
    }else{
        return 1;
    }
}

int setith(int num,int i){
    int mask;
    mask=1<<i;
    return (num|mask);
}

int clearith(int num,int i){
    int mask;
    mask=~(1<<i);
    return (num&mask);
}

int clearlasti(int num,int i){
    int mask;
    mask=(~0)<<i;
    return (num&mask);
}

int countsetbits(int num){
    int count=0;

    while(num>0){
        int lastdig=num&1;
        count+=lastdig;

        num=num>>1;
    }
    cout<<count<<endl;
}

int main(){
    int num,i;

    cout<<"Enter number:"<<endl;
    cin>>num;
    cout<<"Enter i:";
    cin>>i;
    cout<<getith(num,i)<<endl;
    cout<<setith(num,i)<<endl;
    cout<<clearith(num,i)<<endl;
    cout<<clearlasti(num,i)<<endl;
    return 0;
}