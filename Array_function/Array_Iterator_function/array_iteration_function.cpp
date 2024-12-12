/*
    -> Array iterator function
    -> begin() - returns an iterator to the first element in the array.
    -> end() - returns an iterator to the past-the-end element in the array.
    -> rbegin() - returns a reverse iterator to the first element in the array.
    -> rend() - returns a reverse iterator to the past-the-end element in the array.

    -> Use - read only mode
    -> cbegin() - returns a const iterator to the first element in the array.
    -> cend() - returns a const iterator to the past-the-end element in the array.
    -> crbegin() - returns a const reverse iterator to the first element in the array.
    -> crend() - returns a const reverse iterator to the past-the-end element in the array.


*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    //array<int,5> arr={1,2,3,4,5};
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    //begin() and end()
    auto a=v.begin();
    auto b=v.end();

    //print first & last element
    cout<<"First element: "<<*a<<endl;
    cout<<"Last element: "<<*(b-1)<<endl;

    //rbegin() and rend()
    auto c=v.rbegin();
    auto d=v.rend();

    //print last & first element
    cout<<"last element : "<<*c<<endl;
    cout<<"first element : "<<*(d-1)<<endl;

    //Array traverse 
    cout<<"Array traverse using begin() and end():";
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //Array Reverse traverse -> rbegin() and rend()
    cout<<"Array Reverse traverse usign rbegin() and rend():";
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }

    //cbegin(),cend()
    cout<<endl<<"Array traverse using cbegin() and cend() :";
    for(auto it=v.cbegin();it!=v.cend();it++){
        cout<<*it<<" ";
    }
    //crbegin(),crend()
    cout<<endl<<"Array Reverse traverse using crbegin() and crend() :";
    for(auto it=v.crbegin();it!=v.crend();it++){
        cout<<*it<<" ";
    }
    return 0;
}