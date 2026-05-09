#include <iostream>
#include <vector>
using namespace std;

pair<int, int> majorityElement(vector <int>&nums){
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
    }
    
    if(count > n/2){
        return {majority, count};
    }
    
    return {-1, -1};
}

int main(){
    vector <int>num = {2,2,1,1,2,2};
    pair<int, int> result = majorityElement(num);
    
    if (result.first != -1) {
        cout << "Majority Element: " << result.first << ", Count: " << result.second << endl;
    } else {
        cout << "No majority element found." << endl;
    }
    return 0;
}