/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 11 / 2025
   Time  : 20:37
   Problem Link: https://codeforces.com/contest/2074/problem/0
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
    int l, r, d, u;
    cin >> l >> r >> d >> u;
    
    if ((l + r) == (d + u)) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }             
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}