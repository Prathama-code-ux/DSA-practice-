#include <iostream>
#include <string>
using namespace std;

void binStr(int n, int lastPlace, string ans){
    if(n == 0){
        cout << ans << endl;
        return;
    }
    if(lastPlace != 1){
        binStr(n-1, 0, ans+'0');
        binStr(n-1, 1, ans+'1');
    }else{
        binStr(n-1, 0, ans+'0');  
    }
}

int main(){
    string ans="";
    binStr(3, 0, ans);
    return 0;
}