#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    //Operator[] is used to access the element of the array
    cout<<"Operator[] is used to access the element of the array"<<endl;
    cout<<v[0]<<endl;//-> Fist element
    cout<<v[1]<<endl;//-> Second element
    cout<<v[2]<<endl;//-> Third element
    cout<<v[3]<<endl;//-> Fourth element
    cout<<v[4]<<endl;//-> Fifth element
    
    //-> at() function is used to access the element of the array
    cout<<"at() Function use -> "<<endl;
    cout<<v.at(0)<<endl;//-> Fist element
    cout<<v.at(1)<<endl;//-> Second element

    // -> front() function is used to access the first element of the array
    cout<<"front() Function use -> "<<endl;
    cout<<v.front()<<endl;//-> Fist element

    // -> back() function is used to access the last element of the array
    cout<<"back() Function use -> "<<endl;
    cout<<v.back()<<endl;//-> Last element

    // -> data() function is used to access the pointer to the array
    cout<<"data() Function use -> "<<endl;
    cout<<v.data()<<endl;//-> Pointer to the array
    cout<<*v.data()<<endl;//-> First element of the array


    return 0;
}