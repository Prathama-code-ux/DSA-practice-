#include <bits/stdc++.h>
using namespace std;

    int Findstartidx(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int startidx = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                startidx = mid;
                high = mid - 1;
            }else if(nums[mid] >= target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return startidx;
    }

    int Findendidx(vector<int>& nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        int endidx = -1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(nums[mid] == target){
                endidx = mid;
                low = mid + 1;
            }else if(nums[mid] >= target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return endidx;
    }
    int countOccurances(vector<int>& nums, int target) {
        int start = Findstartidx(nums, target);
        int end = Findendidx(nums, target);
        int count = end - start + 1;
        return count;
    }

    int main(){
        vector<int>num = {3, 4, 4, 4, 7, 7, 8, 10};
        int count = countOccurances(num, 7);
        cout << "Number of occurences: " << count << endl;
        return 0;
    }

