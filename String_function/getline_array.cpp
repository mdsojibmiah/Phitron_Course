/*
    -> getline() for Character array 
    -> cin.getline(char, int size);
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    char cars[50];
    cout<<"Enter the name of some cars: ";
    cin.getline(cars,50);
    cout<<endl<<"Cars list : "<<cars<<endl;
    return 0;
}