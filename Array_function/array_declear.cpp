/*
    -> Static Array : Size is fixed at compile time.
    -> Syntax : datatype array_name[size];
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cout<<"Enter the size of array : ";
     cin>>n;
     int a[n];
     cout<<"Array input-> "<<endl;
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     cout<<"Array output-> "<<endl;
     for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
    return 0;
}