#include <bits/stdc++.h>
using namespace std;

int Lowerbound(vector<int> nums, int x, int n){
    int low = 0;
    int high = nums.size() - 1;
    int ans = n;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] >= x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {3,5,8,15,19};
    int LB = Lowerbound(nums, 9, nums.size()-1);
    printf("Lower bound: %d", LB);
    return 0;
}