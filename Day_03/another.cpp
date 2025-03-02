/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 02 / 2025
   Time  : 22:15
   Problem Link: https://codeforces.com/problemset/problem/58/A
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
    string s, h="hello"; cin >> s;
    int j=0;
    for(char c : s) if(c == h[j]) j++;
    cout << (j == 5 ? "YES" : "NO");             
}

int main() {
    fast_io;
    solve();
    return 0;
}