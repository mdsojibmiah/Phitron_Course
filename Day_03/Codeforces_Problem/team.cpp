#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int a,b,c,count=0,solve;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if((a+b+c)>=2){
            count++;
        }
    }
    cout << count;
    return 0;
}