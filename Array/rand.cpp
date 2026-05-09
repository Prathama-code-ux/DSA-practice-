#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums){
    int n = nums.size();
    int majority = nums[0];
    int count = 1;

    for(int i = 0; i < n; i++){
        if(nums[i] == majority){
            count++;
        }else{
            count--;
        }

        if(count == 0){
            majority = nums[i];
            count = 1;
        }
    }

    count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == majority){
            count++;
        }
        if(count > n/2){
            return majority;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2,3,3,2,1,1,3,3,1};
    cout << "Majority Element:" << majorityElement(nums) << endl;
    return 0;
}
