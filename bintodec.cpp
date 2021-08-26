#include<bits/stdc++.h>
using namespace std;

int binTodec(int n){
    int ans=0;
    int x=1; //represents powers of 2

    while (n>0){
        int y=n%10;
        ans+=x*y;
        x=x*2;
        n=n/10;
    }

    return ans;
}

int main(){
    int n;
    cin>>n;

    cout<<binTodec(n)<<endl;

    return 0;
}