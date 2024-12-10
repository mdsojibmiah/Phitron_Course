/*
    -> push_back function-last add
    -> pop_back function deleting last char 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"My name is :";
    getline(cin,s);
    cout<<s<<endl;

    /* -> Inserting a character i at the end of the strin 
       -> using the push_back function
    */
    s.push_back('i');
    cout<<"Push_back add char i-> :"<<s<<endl;
    /*
        -> Deleteing the i from the end using pop_back
    */ 
    s.pop_back();
    cout<<"Pop_back deleting the i from the end -> "<<s<<endl;
    return 0;
}