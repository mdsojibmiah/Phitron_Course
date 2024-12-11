/*
    -> Dynamic array is an array whose size is not fixed at compile time.
    -> It is also called as a flexible array.
    -> It is used to store the data dynamically.
    -> It is created using the new keyword.
    -> It is destroyed using the delete keyword.
    -> Syntax: int* arr = new int[n];
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int* arr = new int[n];
    cout<<"Array input-> "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array output-> "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr;// Free memory
    return 0;
}