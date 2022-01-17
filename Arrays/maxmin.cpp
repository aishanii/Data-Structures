//find max and min in an array

#include<iostream>
using namespace std;

int main(){
    int arr[10],max,min,size;

    cout<<"Enter size of array ";
    cin>>size;

    for(int i=0;i<size;i++)
    cin>>arr[i];

    max=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]>max)
        max=arr[i];

    }

    min=arr[0];

    for(int i=0;i<size;i++){
        if(arr[i]<min)
        arr[i]=min;
    }

    cout<<"Largest element is: "<<max<<endl;
    cout<<"Smallest element is: "<<min;

    return 0;
}

