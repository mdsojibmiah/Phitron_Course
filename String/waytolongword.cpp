/*  Author:Error_404_Coder
    Problem Name : Way too long words
    Link : https://codeforces.com/problemset/problem/71/A
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        string w;cin>>w;
        cout<< (w.length()>10?w[0]+to_string(w.length()-2)+w.back():w)<<endl;
    }
    return 0;
}