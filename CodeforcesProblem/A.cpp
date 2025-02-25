/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 25 / 2025
   Time  : 20:38
   Problem Link: https://codeforces.com/contest/2072/problem/A
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
    int t, n, k, p;
    cin >> t;
    while (t--) {
        cin >> n >> k >> p;
        if (k < -n * p || k > n * p) cout << "-1\n";
        else cout << (abs(k) + p - 1) / p << '\n';
    }             
}

int main() {
    fast_io;
    solve();
    return 0;
}