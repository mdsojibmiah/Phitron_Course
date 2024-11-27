#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,temp;cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)cin>>a[i];
    int k;cin>>k;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout <<a[k];
    return 0;
}