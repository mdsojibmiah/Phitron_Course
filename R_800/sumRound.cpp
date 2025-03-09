/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 09 / 2025
   Time  : 21:39
   Problem Link: https://codeforces.com/problemset/problem/1352/A
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
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> r;
        int p = 1;
        while (n) {
            if (n % 10) r.push_back((n % 10) * p);
            n /= 10;
            p *= 10;
        }
        cout << r.size() << '\n';
        for (int x : r) cout << x << ' ';
        cout << '\n';
    }            
}

int main() {
    fast_io;
    solve();
    return 0;
}