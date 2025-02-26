/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 25 / 2025
   Time  : 20:58
   Problem Link: https://codeforces.com/contest/2072/problem/F
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
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        if (n == 1) {
            cout << k << nl;
            continue;
        }

        vector<int> row(n);
        row[0] = k;
        row[n-1] = k;

        for (int i = 1; i < n-1; ++i) {
            row[i] = 0;
        }

        for (int i = 0; i < n; ++i) {
            cout << row[i] << " ";
        }
        cout << nl;
    }            
}

int main() {
    fast_io;
    solve();
    return 0;
}