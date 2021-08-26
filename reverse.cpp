#include<iostream>
using namespace std;

int main(){
int n,rev;
cin>>n;

while (n>0){
    int last_dig=n%10;
    rev=rev*10+last_dig;
    n=n/10;
}

cout<<rev<<endl;

    return 0;
}