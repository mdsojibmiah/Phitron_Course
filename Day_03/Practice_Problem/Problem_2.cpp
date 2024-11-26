#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q,sum=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    for(int j=0;j<q;j++){
        int i,v;cin>>i>>v;
        a[i]+=v;
    }
    for(int i=0;i<n;i++){
        cout <<a[i] << " ";
    }

    return 0;
}