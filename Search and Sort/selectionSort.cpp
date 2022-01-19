#include<bits/stdc++.h>
using namespace std;

void selecSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size,arr[10];
    cout<<"Enter size of array: ";
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is: ";
    printArr(arr,size);

    cout<<endl;

    selecSort(arr,size);

    cout<<"The sorted array is: ";
    printArr(arr,size);

    return 0;
}