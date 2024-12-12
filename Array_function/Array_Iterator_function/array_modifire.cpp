#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    //-> push_back() -> add element at the end of the array
    v.push_back(11);
    for(int i:v)cout<<i<<" ";
    //-> pop_back() -> remove element from the end of the array
    cout<<endl;
    v.pop_back();
    for(int i:v)cout<<i<<" ";

    //-> insert() -> add element at the given position
    cout<<endl;
    v.insert(v.begin()+2,100);// add 100 at the 2nd position
    for(int i:v)cout<<i<<" ";
    cout<<endl;

    //-> erase() -> remove element from the given position
    v.erase(v.begin()+2);// delete element at the 2nd position
    for(int i:v)cout<<i<<" ";
    cout<<endl;
    //-> clear() -> remove all element from the array
    v.clear();
    for(int i:v)cout<<i<<" ";
    cout<<v.size();// return the size of the array

    cout<<endl;
    //-> resize() -> resize the array
    v.resize(10);
    cout<<v.size();// return the size of the array
    cout<<endl;

    vector<int> v1= {1,2,3,4,5,6,7,8,9,10};
    vector<int> v2= {11,12,13,14,15,16,17,18,19,20};
    //-> swap() -> swap two array
    v1.swap(v2);
    for(int i:v1)cout<<i<<" ";
    cout<<endl;
    for(int i:v2)cout<<i<<" ";
    cout<<endl;
    
    //-> assign() -> assign a value to the array
    v.assign(5,100);
    for(int i:v)cout<<i<<" ";




    return 0;
}