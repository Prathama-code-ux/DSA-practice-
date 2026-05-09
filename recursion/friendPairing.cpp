#include <iostream>
using namespace std;

int friendPair(int n){
    if (n == 1 || n == 2){
        return 1;
    }
    return friendPair(n-1) + (n-1)*friendPair(n-2);
}

int main(){
    cout << friendPair(8) <<endl;
    return 0;
}