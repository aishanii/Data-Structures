//search for an element in a sorted 2-D matrix
#include<iostream>
using namespace std;

int main(){
    int n,m,target;
    cin>>n>>m;
    cin>>target;

    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            cin>>arr[i][j];
        }
    }

    //top-right position of the matrix
    int r=0,c=m-1;
    bool found=false;
    while(r<n && c>=0){ //to stay within the matrix
        if(arr[r][c]==target){
            found=true;
        }

        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    
    if(found){
        cout<<"Target found"<<endl;
    }
    else{
        cout<<"Element doesn't exist"<<endl;
    }

    return 0;
}
