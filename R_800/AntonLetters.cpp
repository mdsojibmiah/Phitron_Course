/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 08 / 2025
   Time  : 21:05
   Problem Link: https://codeforces.com/problemset/problem/443/A
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()


#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    string s;
    getline(cin,s);
    set<char>st;
    for (char c:s){
        if (isalpha(c)) st.insert(c);
    } 
    cout << st.size();        
}

int main() {
    fast_io;
    solve();
    return 0;
}