/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 07 / 2025
   Time  : 22:27
   Problem Link: https://www.codechef.com/problems/PRIMEREVERSE
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << "YES\n";
#define NO cout << "NO\n";
#define Yes cout << "Yes\n";
#define No cout << "No\n";
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, c0 = 0, c1 = 0;
        string a, b;
        cin >> n >> a >> b;
        for (char x : a) x == '0' ? c0++ : c1++;
        cout << (c0 == count(b.begin(), b.end(), '0') ? YES : NO);
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}