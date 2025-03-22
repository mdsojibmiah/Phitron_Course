/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 22 / 2025
   Time  : 09:41
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
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
        int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
        cout << (sum1 == sum2 ? "YES" : "NO") << nl;
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