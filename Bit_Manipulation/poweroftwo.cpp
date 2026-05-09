#include <iostream>
using namespace std;

bool ispowerof2(int num){
    if (!(num&(num-1))){
        return true;
    }else{
        return false;
    }
}

int main(){
    int num,i;

    cout<<"Enter number:"<<endl;
    cin>>num;
    
    cout<<ispowerof2(num);
    return 0;
}