#include <iostream>
#include <string>
using namespace std;

void removeDup(string str, string ans, int i, bool map[26]){
    if(i == str.size()){
        cout << "ans :" << ans << endl;
    }

    int mapIdx = (int)(str[i]-'a');

    if(map[mapIdx]){ //duplicate
        removeDup(str, ans, i+1, map);
    }else{
        map[mapIdx]=true;
        removeDup(str, ans+str[i], i+1, map);
    }

}

int main(){
    string str = "appnnaa college";
    string ans = " ";
    bool map[26] = {false};
    
    removeDup(str, ans, 0, map);

}