#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;cin>>target;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(a[i]+a[j]==target){
                cout <<"YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}