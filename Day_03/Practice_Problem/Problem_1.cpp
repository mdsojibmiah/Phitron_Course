#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n<=0){
        cout << "Invalid Array size";
        return 1;
    }
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        cout << a[i]<< " ";
    }
    return 0;
}