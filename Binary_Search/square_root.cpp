#include <bits/stdc++.h>
using namespace std;
 
int SquareRoot(int x){
    int start = 0;
    int end = x/2;
    int ans;

    if(x < 2){return x;}

    while(start <= end){
        long long mid = start + (end - start)/2;

        if( mid * mid <= x){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int sqrt = SquareRoot(28);
    cout << sqrt << endl;
    return 0;
}