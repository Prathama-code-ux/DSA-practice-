#include <bits/stdc++.h>
using namespace std;

int kadane(vector<int> &nums){
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int value: nums){
        currSum += value;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    cout << "Max subarray sum:" << kadane(nums);
    return 0;
}