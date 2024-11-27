#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;cin>>n;
    int a[n];
    if(n<0)cout<<"Enter the postive integer ";
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%2!=0){
            sum+=a[i];
        }
    }
    cout<<(sum%2==0?"YES":"NO");
    return 0;
}