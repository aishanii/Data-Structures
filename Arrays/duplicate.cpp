#include<bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[],int size){
    int num;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j])
            num=arr[i];
        }
    }

    return num;
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10];
    int size;

    cout<<"Enter size of array:"<<endl;

    cin>>size;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<endl;

    cout<<"The duplicate element is: "<<findDuplicate(arr,size)<<endl;

    return 0;


}