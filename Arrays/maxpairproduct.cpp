#include<bits/stdc++.h>
using namespace std;

int maxprod(int arr[],int size){

    if(size<2){
        cout<<"No pairs exist!";
    }

    int result=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]*arr[j]>result)
            result=arr[i]*arr[j];
        }
    }

    return result;
}

int main()
{
    int arr[] = {1, 4, 3, 6, 7, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<maxprod(arr, size);

    
    return 0;
}