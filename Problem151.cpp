/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 17 / 2025
   Time  : 19:13
   Problem Link: https://codeforces.com/problemset/problem/151/A
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
    int n, k, l, c, d, p, n1, np;
    cin >> n >> k >> l >> c >> d >> p >> n1 >> np;
    cout << min({(k * l) / n1, c * d, p / np}) / n;           
}

int main() {
    fast_io;
    solve();
    return 0;
}