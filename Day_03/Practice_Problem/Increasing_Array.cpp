#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            m+=(a[i-1] - a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<m;
    return 0;
}