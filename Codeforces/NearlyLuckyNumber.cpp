/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 07 / 2025
   Time  : 21:35
   Problem Link: https://codeforces.com/problemset/problem/110/A
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
    string n;
    cin >> n;
    
    int count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }

    if (count == 4 || count == 7) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}