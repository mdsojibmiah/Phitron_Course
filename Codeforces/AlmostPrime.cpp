/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 10 / 2025
   Time  : 15:22
   Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P16
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
    int n, c = 0;
    cin >> n;
    vector<int> d(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (d[i] == 0) {
            for (int j = i; j <= n; j += i) {
                d[j]++;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (d[i] == 2) c++;
    }
    cout << c;
}

int main() {
    fast_io;
    solve();
    return 0;
}