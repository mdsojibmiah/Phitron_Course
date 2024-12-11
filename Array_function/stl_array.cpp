/*
    -> STL Array is a template class in C++ Standard Template Library (STL) which provides a way to handle fixed size arrays.
    -> It is used to store elements of same data type in contiguous memory location.
    -> It is used to handle the arrays easily and efficiently.
    -> Syntax: array<datatype, size> arrayName;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    //Ensure n does not exceed the size of the array
    array<int,5> arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}