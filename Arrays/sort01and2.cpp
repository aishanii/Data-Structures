#include<bits/stdc++.h>
using namespace std;

void sort012(int arr[],int size){
    int count0=0,count1=0,count2=0;

    for(int i=0;i<size;i++){
        if(arr[i]==0);
        count0++;
        if(arr[i]==1);
        count1++;
        if(arr[i]==2);
        count2++;
    }

    for(int i=0;i<count0;i++)
    arr[i]=0;

    for(int i=count0;i<(count0+count1);i++)
    arr[i]=1;

    for(int i=(count0+count1);i<size;i++)
    arr[i]=2;

    
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int arr[6]={1,0,2,2,0,1};
    int size=sizeof(arr)/sizeof(arr[0]);

    sort012(arr,size);
    printArray(arr,size);

    return 0;
}