/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 16 / 2025
   Time  : 22:30
   Problem Link:https://codeforces.com/problemset/problem/155/A 
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
    int n, c = 0, s, mn, mx;
    cin >> n >> mn;
    mx = mn;
    for (int i = 1; i < n; i++) {
        cin >> s;
        if (s > mx) {
            c++;
            mx = s;
        } else if (s < mn) {
            c++;
            mn = s;
        }
    }
    cout << c << nl;           
}

int main() {
    fast_io;
    solve();
    return 0;
}