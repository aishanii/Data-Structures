//Given an array Arr of N positive integers.
// Your task is to find the elements whose value is equal to that of its
// index value ( Consider 1-based indexing )

#include<bits/stdc++.h>
using namespace std;

int indexValue(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i] == i)
        return arr[i];
    }
    return -1;
}

int main(){
    int arr[]={-10, -5, 0, 3, 7};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<indexValue(arr,size);

    return 0;
}