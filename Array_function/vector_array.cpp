/*
    -> Vector is a sequence container that encapsulates dynamic size arrays.
    -> It is similar to arrays, but we do not need to provide the size at the beginning. It can grow and shrink as required.
    -> Syntax: vector<data_type> vector_name;

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n); // vector of size n
    for(int i=0;i<n;i++){
        //cin>>v[i];
        int temp;
        cin>>temp;
        v.push_back(temp);

    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}