#include <bits/stdc++.h>
using namespace std;

int Findfloor(vector<int>num, int x){
    int low = 0;
    int high = num.size() - 1;
    int floor = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(num[mid] <= x){
            floor = num[mid];
            low = mid + 1;
        }else{
            
            high = mid - 1;
        }
    }
    return floor;
}

int Findceil(vector<int>num, int x){
    int low = 0;
    int high = num.size() - 1;
    int ceil = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(num[mid] >= x){
            ceil = num[mid];
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ceil;
}

int main(){
    vector<int>num = {3, 4, 4, 7, 8, 10};
    int FL = Findfloor(num, 5);
    int CL = Findceil(num, 5);

    cout << "Floor and ceil are:" << FL << " " << CL;
    return 0;
}