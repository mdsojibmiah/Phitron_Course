#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j;cin>>n;cin>>m;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}