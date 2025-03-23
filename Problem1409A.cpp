/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 23 / 2025
   Time  : 09:15
   Problem Link: 
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
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        int d = abs(a - b);
        cout << (d + 9) / 10 << '\n';
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