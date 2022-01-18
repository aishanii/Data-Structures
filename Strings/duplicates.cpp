#include<bits/stdc++.h>
using namespace std;

char dup(string str){
    for(int i=0;i<str.length()-1;i++){
        for(int j=i+1;j<str.length()-1;j++){
            if (str[i]==str[j])
            return str[i];
        }
    }
}

int main(){
    string s="goop";
    cout<<dup(s);

    return 0;
}