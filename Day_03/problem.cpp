/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 26 / 2025
   Time  : 22:47
   Problem Link: https://codeforces.com/problemset/problem/228/A
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
    set<int> c;
    int s;
    for (int i = 0; i < 4; i++) {
        cin >> s;
        c.insert(s);
    }
    cout << 4 - c.size() << nl;             
}

int main() {
    fast_io;
    solve();
    return 0;
}