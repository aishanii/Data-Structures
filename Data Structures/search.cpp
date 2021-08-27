//to perform linear search in an array

#include<bits/stdc++.h>
using namespace std;
 
int find(int arr[], int n,
                int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}
 
int main()
{
    int arr[] = {12, 34, 10, 6, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    int key = 40;
    int position = find(arr, n, key);
 
    if (position == - 1)
        cout << "Element not found";
    else
        cout << "Element Found at Position: "
             << position + 1;
 
    return 0;
}
