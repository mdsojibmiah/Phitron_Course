#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j;cin>>n;
    for(j=1;j<=n;j++){
        cout << "# ";
    }
    cout<<endl;
    for(i=1;i<=(n-2);i++){
        cout << "#";
        for(j=1;j<=(n-2);j++){
            cout << " ";
        }
        cout <<"#"<< endl;
    }
    for(j=1;j<=n;j++){
        cout << "# ";
    }
    return 0;
}