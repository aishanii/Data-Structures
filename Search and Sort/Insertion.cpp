#include<bits/stdc++.h>
using namespace std;

void InsertSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int current=arr[i];
        int j=i-1;

        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current; //j is decremented
    }
}

void printA(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size,arr[10];
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }


    InsertSort(arr,size);
    printA(arr,size);

    return 0;
}