#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;cin>>n;
    int a[200001];
    // for(int i=0;i<n;i++){
    //     cout << a[i]<< endl5;
    // }
    for(int i=1;i<n;i++){
        cin >> x;
        a[x]=1;
    }
    for(int i=1;i<=n;i++){
        //cout << a[i] << endl;
        if(a[i]==0){
            cout << i;
        }
    }
    return 0;
}