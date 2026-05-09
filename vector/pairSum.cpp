#include <iostream>
#include <vector>
using namespace std;

vector<int>pairSum(vector<int>numbers,int target){
    vector<int>ans;
    int currSum=0;

    for(int i=0;i<numbers.size()-1;i++){
        for(int j=numbers.size()-1;j>0;j--){
            currSum=numbers[i]+numbers[j];
            if(currSum==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int>numbers={2,7,11,15};
    int target=9;
    vector<int>result=pairSum(numbers,target);

    cout<<result[0]<<" "<<result[1];
    return 0;
}