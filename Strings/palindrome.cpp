#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    for (int i = 0; i < str.length() / 2; i++) {
 
        if (str[i] != str[str.length() - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    string str="abba";

    cout<<isPalindrome(str);

    return 0;
}