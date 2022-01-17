#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int kthsmallest(int arr[], int size, int k){
    sort(arr,arr+size);

    return arr[k-1];
}

int kthlargest(int arr[], int size, int k){
    sort(arr,arr+size); 

      return arr[size-k];
}

int main(){
    int arr[5]={1,8,3,6,5};

    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"kth smallest element is "<<kthsmallest(arr,size,2)<<endl;
    cout<<"kth largest element is "<<kthlargest(arr,size,2)<<endl;

    return 0;
}