/*
    -> begin()-
    -> end()-
    -> rbegin()-
    -> redn()-
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="Hello";
    //string::iterator it;
    
    for(auto it=s.begin();it!=s.end();it++){
        *it=toupper(*it);
        cout<<*it<<" ";
    }
    cout<<endl<< "Reverse iteration-> rebeign(), rend()"<<endl;
    for(auto it=s.rbegin();it!=s.rend();it++){
        cout<<*it;
    }   


    return 0;
}