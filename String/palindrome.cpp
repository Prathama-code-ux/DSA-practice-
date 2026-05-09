#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char word[],int n){
    int st=0,end=n-1;
    while(st<end){
        if(word[st++]!=word[end--]){
            cout<<"Not Palindrome";
           return false;
        }
    }
    cout<<"Palindrome";
    return true;
}

int main(){
    char word[]="cat";
    isPalindrome(word,strlen(word));

    return 0;
}

