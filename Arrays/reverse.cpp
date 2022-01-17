#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int i,int j){

    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
}

int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    printArray(arr,n);
    reverseArray(arr,0,n-1);
    printArray(arr,n); //to print the reversed array

    return 0;

}



   


