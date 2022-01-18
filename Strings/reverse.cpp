#include<bits/stdc++.h>
using namespace std;

void rev(string str){
    for(int i=str.length()-1;i>=0;i--){
        cout<<str[i];
    }
}

int main(){
    string s="goosebumps";
    rev(s);

    return 0;
}