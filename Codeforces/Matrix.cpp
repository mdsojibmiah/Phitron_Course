/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 12 / 2025
   Time  : 16:39
   Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T
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
    int n, p = 0, s = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> x;
            if (i == j) p += x;
            if (i + j == n - 1) s += x;
        }
    cout << abs(p - s) << nl;           
}

int main() {
    fast_io;
    solve();
    return 0;
}