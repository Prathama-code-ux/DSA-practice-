#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &nums){
    int n = nums.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
            }
        }
    }
    return;
}

//3-pointer approach
void sortColor(vector<int> &nums){
    int low = 0;
    int mid = 0;
    int high = nums.size()-1;

    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    vector<int> nums1 = {2,1,0,1,2,1,0};
    vector<int> nums2 = {2,1,0,1,2,1,0};
    
    sortColor(nums1);
    cout << "sortColor result: ";
    for(int x : nums1) cout << x << " ";
    cout << endl;

    bubbleSort(nums2);
    cout << "bubbleSort result: ";
    for(int x : nums2) cout << x << " ";
    cout << endl;
    return 0;
}