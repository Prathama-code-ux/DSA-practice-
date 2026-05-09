#include <iostream>
using namespace std;

int tilingProblem (int n) {
    if(n == 1 || n == 0) {
        return 1;
    }

    int ans1 = tilingProblem(n-1); //vertical
    int ans2 = tilingProblem(n-2); //horizontal

    return ans1 + ans2; 
}

int main(){
    cout<<tilingProblem(10);
    return 0;
}