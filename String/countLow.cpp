#include <iostream>
#include <string>
using namespace std;

void countLow(string str){
    int count=0;

    for(int i=0;i<str.length();i++){
        if(str[i]>='A' && str[i]<='Z'){
            continue;
        }
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
    }
    cout<<"Number of lower case vowels in string="<<count<<endl;
}

int main(){
    string str="RACECAR";
    countLow(str);
    return 0;
}