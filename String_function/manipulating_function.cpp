/*
    ->copy(char array, length, position)
    ->swap - string1.swap(string2)->string2 vlaue store string1
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World!";
    char a[20];
    s.copy(a,5,6);
    a[5]='\0';
    cout<<"Original string -> "<<s<<endl;
    cout<<"Copied Substring -> "<<a<<endl;

    //-> swap()

    string s1 = "Hello";
    string s2 = "World";
    cout<<"orginal string -> "<<s1<<"   "<<s2<<endl;

    s1.swap(s2);
    cout<<"Swap string -> "<<s1<<"   "<<s2<<endl;

    return 0;
}