#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int minimumDiff(int arr[],int size,int k){
    sort(arr,arr+size);
    int ans=arr[size-1]-arr[0];
    int mi,ma;

    int smallest=arr[0]+k;
    int largest=arr[size-1]-k;

    for(int i=0;i<size;i++){
        ma=max(arr[i]+k,largest);
        mi=min(arr[i+1]-k,smallest);

        ans=min(ans,ma-mi);
    }

    return ans;

}

int main(){
    int arr[]={3,9,16,12,20};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<minimumDiff(arr,size,3)<<endl;

    return 0;
}