#include<bits/stdc++.h>//to move all negative numbers in front of the array
using namespace std;

void negnums(int arr[],int size){
    int j=0,temp;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;

            j++;
        }
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,4,-6,7,-9,-3,10};
    int size=sizeof(arr)/sizeof(arr[0]);

    negnums(arr,size);
    printArr(arr,size);

    return 0;
}