/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 09 / 2025
   Time  : 17:33
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> c(m + 1, 0);
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        c[x]++;
    }
    for (int i = 1; i <= m; i++) {
        cout << c[i] << endl;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}