/*
    -> capacity()-Returns the capacity allocatedd to a string by the compiler

    -> resize()-Allows increasing or decreasing the size of the string

    -> length()-Returns the size of the string

    -> shrink_to_fit()-Decreases and makes the capacity equal to the minimum to save memory
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="C++ Programming";
    cout << "String -> "<<s<<endl;
    cout << "Capacity -> "<<s.capacity()<<endl;

    /* 
        -> resize() function use
        resize(value,'content')
    */
    string r = "Programming";
    cout <<"Before resizing -> "<<r<<endl;
    r.resize(5);
    cout<<"After resizing (smaller)-> "<<r<<endl;

    r.resize(10,'X');
    cout<< "After resizing (larger)-> "<<r<<endl;

    /*
    -> length()
    */
    cout<<"S string length -> "<<s.length()<<endl<<"R string length -> "<<r.length()<<endl;

    /*
    -> shrink_to_fit()
    */
    string sh = "Optimize Memory";
    cout<<"Before shrinking -> "<<endl;
    cout<<"Capacity -> "<<sh.capacity()<<endl;

    sh.shrink_to_fit();
    cout<<"After shrinking -> "<<endl;
    cout<<"Capacity -> "<<sh.capacity()<<endl;

    return 0;
}