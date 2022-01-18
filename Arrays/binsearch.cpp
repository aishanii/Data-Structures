#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0,end=size;

    while(start<end){
    int mid=(start+end)/2;

    if(arr[mid]==key){
        return mid;
    }

    if(arr[mid]>key){
        end=mid-1;
    }
    else if(arr[mid]<key){
        start=mid+1;
    }
    }  
}
   

int main(){
    int arr[]={12,30,45,60,74};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<binarySearch(arr,size,30);

    return 0;
}