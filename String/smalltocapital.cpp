#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;getline(cin,s);
    int i=0;
    while(s[i]!=0){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
        i++;
    }
    cout << s;
    return 0;
}