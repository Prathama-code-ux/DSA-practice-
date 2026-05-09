#include <iostream>
using namespace std;

int main(){
    int arr[] = {7, 1, 5, 3, 6, 4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int minPrice=arr[0];
    int maxprofit=0;

    for(int i=0;i<n;i++){
        int currPrice=arr[i];
        int profit=currPrice-minPrice;

        if(maxprofit<profit){
            maxprofit=profit;
        }

        if(currPrice<minPrice){
            minPrice=currPrice;
        }
    }
    cout<<maxprofit<<endl;
    
    return 0;
}