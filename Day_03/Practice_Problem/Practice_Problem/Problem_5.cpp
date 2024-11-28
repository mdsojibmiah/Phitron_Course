#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int count=0;
    if(n<=1){
        count=1;
    }else{
        for(int i=2;i<sqrt(n);i++){
            if(i%2==0){
                count=1;
                break;
            }
        }
    }
    cout<<(count==0?"YES Prime number":"NO Prime Number");
    return 0;
}