#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return i;
    }  
}

int main(){
    int arr[]={2,5,7,4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<linearSearch(arr,size,7);

    return 0;
}