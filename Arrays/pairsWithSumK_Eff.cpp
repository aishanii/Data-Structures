//This approach has O(n) complexity
#include<bits/stdc++.h>
#include<map>
using namespace std;

int getPairsCount(int arr[],int size, int k){
    int count=0;

    unordered_map<int,int> mp;

    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }

    for(int i=0;i<size;i++){
        if(mp.find(k-arr[i])!=mp.end()){
            count+=mp[k-arr[i]];

            if(k-arr[i]==arr[i]){
                count--;
            }
        }
    }
    return count/2; //we don't want duplicate pairs
}

int main(){
    int arr[]={1,2,-1,4,6,5,-2};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<getPairsCount(arr,size,3);

    return 0;
}