#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];

    // capacity() function
    cout<<"Capacity of vector-> "<<v.capacity()<<endl;

    // size() function
    cout<<"Size of vector-> "<<v.size()<<endl;

    // max_size() function
    cout<<"Max size of vecotr-> "<<v.max_size()<<endl;


    // resize() function
    v.resize(n+2,100);// default value is 100
    cout<<"Capacity of vector after resize-> "<<v.capacity()<<endl;
    for(int i=0;i<n+2;i++)cout<<v[i]<<" ";

    // empty() function
    cout<<endl<<v.empty()<<endl;// -> true or false 1,0

    v.shrink_to_fit();// shrink_to_fit() function



    return 0;
}