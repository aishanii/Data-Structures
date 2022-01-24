#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    int j=1;
    while(j<size){
        for(int i=0;i<size-j;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=arr[i];
            }
        }
        j++;
    }
}

void printA(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){
    int size,arr[10];
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<endl;
    bubbleSort(arr,size);
    printA(arr,size);

    return 0;

}