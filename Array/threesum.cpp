#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    int n = nums.size();
    int i = 0;
    int j = n-1;

    for(int k = 0; k < n; k++){
        if(nums[i++] + nums[j--] + nums[k] == 0 &&
            i!=j && j!=k && j!=i){
                ans.push_back({nums[i],nums[j],nums[k]});
        }
    }
    return ans;
}