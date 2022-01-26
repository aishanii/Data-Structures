#include<bits/stdc++.h>
using namespace std;

int maxx(int arr[],int size){
    int mx;
    for(int i=0;i<size;i++){
         mx=max(mx,arr[i]);
    }
    return mx;
}

int main(){
    int arr[]={0,-9,1,3,-4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<maxx(arr,size);

    return 0;
}