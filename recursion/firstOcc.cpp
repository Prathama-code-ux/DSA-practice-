#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr, int target, int i){
    if(i < 0){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return lastOcc(arr, target, i-1);
}

int power(int x, int n){
    if(x == 0){
        return 1;
    }
    return n*power(x-1, n);
}

int main(){
    vector<int> arr1 = {1,2,2,2,3,3,3,9};
    int target = 3;
    int n = arr1.size();
    cout << lastOcc(arr1, target, n-1)<<endl;
    cout << power(4,2);
}