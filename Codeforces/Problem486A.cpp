/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 18 / 2025
   Time  : 22:41
   Problem Link: https://codeforces.com/problemset/problem/486/A
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
    ll n;
    cin >> n;
    cout << (n % 2 ? -(n + 1) / 2 : n / 2) << nl;             
}

int main() {
    fast_io;
    solve();
    return 0;
}