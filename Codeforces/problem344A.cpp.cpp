/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 17 / 2025
   Time  : 11:53
   Problem Link: https://codeforces.com/problemset/problem/344/A
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
    int n, count = 1;
    string prev, curr;
    cin >> n >> prev;
    for (int i = 1; i < n; i++) {
        cin >> curr;
        if (curr != prev) count++;
        prev = curr;
    }
    cout << count << nl;             
}

int main() {
    fast_io;
    solve();
    return 0;
}