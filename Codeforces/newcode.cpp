/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 19 / 2025
   Time  : 22:14
   Problem Link: https://codeforces.com/problemset/problem/136/A
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
    int n, x;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x - 1] = i + 1;
    }
    for (int i : a) cout << i << " ";             
}

int main() {
    fast_io;
    solve();
    return 0;
}