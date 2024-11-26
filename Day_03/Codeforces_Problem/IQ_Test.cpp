#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[100];
    int ec=0,oc=0,ei=0,oi=0;
    for(int i=1;i<=n;i++){
        int x;cin>>x;
        (x%2==0)?(ec++,ei=i):(oc++,oi=i);
    }
    cout << (ec==1?ei:oi);
    return 0;
}