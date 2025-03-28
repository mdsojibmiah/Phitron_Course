/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 19 / 2025
   Time  : 21:27
   Problem Link: https://codeforces.com/problemset/problem/337/A
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
    int n, m;
    cin >> n >> m;
    vector<int> f(m);
    for (int i = 0; i < m; i++) cin >> f[i];
    sort(f.begin(), f.end());
    int r = f[n - 1] - f[0];
    for (int i = 1; i + n - 1 < m; i++)
        r = min(r, f[i + n - 1] - f[i]);
    cout << r;            
}

int main() {
    fast_io;
    solve();
    return 0;
}