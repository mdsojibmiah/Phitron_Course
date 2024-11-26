#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int unique_value = 1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            unique_value = 0;
            break;
        }
    }
    cout << (unique_value?"YES":"NO");
    return 0;
}