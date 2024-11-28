#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    int p[n];
    int p_c=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        //bool isPrime = true;
        int prime=true;
        if(a[i]<=1)prime=false;
        else{
            for(int j=2;j<=sqrt(a[i]);j++){
                if(a[i]%j==0){
                    prime=false;
                    break;
                }
            }
        }
        if(prime)p[p_c++]=a[i];
    }
    cout<<p_c<<endl;
    for(int i=0;i<p_c;i++)cout<<p[i]<< " ";
    
    return 0;
}