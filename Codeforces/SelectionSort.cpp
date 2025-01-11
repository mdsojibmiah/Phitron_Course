/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 11 / 2025
   Time  : 20:47
   Problem Link: 
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
    int n, i, j, k, m;
    cin >> n;
    vector<int> a(n);
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n - 1; i++) {
        m = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[m]) m = j;
        }
        swap(a[i], a[m]);
        for (k = 0; k < n; k++) cout << a[k] << " ";
        cout << nl;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}