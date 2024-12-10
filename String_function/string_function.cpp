/*
    ->Getline function defined in the <string.h>
    ->Taking full name
    ->Taking details such as address and bio
    ->Asking for any long-form or multi-line input
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
        -> Cin object cannot read multi-word or multi-line input
    */
   string user_name;
   cout<< "What is your name?"<<endl;
   cin>>user_name;
   cout<<"My name is "<<user_name<<endl;

   /*
    -> Using getline() function with Two Parameters
   */
   string s;
   cout<< "What is your name?"<<endl;
   getline(cin,s);// two parameters
   cout<<"My name is "<<s<<endl;

   /*
    -> Using getline() function with Three Parameters
   */
   string a;
   cout<< "What is your name?"<<endl;
   getline(cin,a,' ');// three parameters
   cout<<"My name is "<<a<<endl;

    return 0;
}