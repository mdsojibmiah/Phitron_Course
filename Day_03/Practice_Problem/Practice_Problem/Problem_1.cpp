#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    if(n<=0){
        cout<<"Invalid Input";
        return 0;
    }
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    // if(n>1){
    //     fib[1]=1;
    // }
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    for(int i=0;i<n;i++){
        cout <<fib[i];
        if(i<n-1)cout<< " ";
    }
    return 0;


    return 0;
}