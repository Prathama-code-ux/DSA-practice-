#include <iostream>
#include <string>
using namespace std;

bool isSame(string str1,string str2){
    int diffcount=0;
    int first=-1,second=-1;

    if (str1.length()!=str2.length()){
        cout<<"cannot be same"<<endl;
        return false;
    }

    for(int i=0;i<str1.length();i++){
        if(str1[i]!=str2[i]){
            diffcount++;
            
            if(diffcount==1){
            first=i;
            }
            else if(diffcount==2){
            second=i;
            }
            else{
            cout<<"cannot be same"<<endl;
            return false;
            }
        }
    }

    if(diffcount==0){
        cout<<"can be same"<<endl;
        return true;
    }

    if(diffcount==2 && str1[first]==str2[second] && str1[second]==str2[first]){
            cout<<"can be same"<<endl;
            return true;
        }
        cout<<"cannot be same"<<endl;
        return false;
        }



int main(){
    string str1="bank";
    string str2="kanb";
    isSame(str1,str2);
    return 0;
}