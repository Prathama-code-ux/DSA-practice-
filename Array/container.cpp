#include <bits/stdc++.h>
using namespace std;

int container(vector<int> &height){
    int left = 0;
    int right = height.size() - 1;
    int maxarea = 0;

    while(left < right){
        int width = right - left;
        int h = min(height[left], height[right]);
        int area = width * h;

        maxarea = max(area, maxarea);

        if(height[left] < height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxarea;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout << container(height) << endl;
    return 0;
}