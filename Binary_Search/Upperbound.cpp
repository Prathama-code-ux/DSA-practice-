#include <bits/stdc++.h>
using namespace std;

int Upperbound(vector<int>nums, int x, int n){
    int low = 0; 
    int high = nums.size() - 1;
    int ans = n;

    while(low <= high){
        int mid = low + (high - low)/2;
        
        if(nums[mid] > x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,5,8,9,15,19};
    int UB = Upperbound(nums, 9, nums.size()-1);
    printf("Lower bound: %d", UB);
    return 0;
}