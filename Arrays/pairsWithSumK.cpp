#include<bits/stdc++.h>
using namespace std;

//inefficient solution

int countPairs(int arr[],int size, int key){
    int count=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==key)
            count++;
        }
    }
    return count;
}

int main(){
    int arr[]={1,4,6,3,2,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<countPairs(arr,size,5);

    return 0;
}