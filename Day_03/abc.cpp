/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 27 / 2025
   Time  : 22:51
   Problem Link: https://codeforces.com/problemset/problem/133/A
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
    string p;
    cin >> p;
    for (char c : p) if (c == 'H' || c == 'Q' || c == '9') { cout << "YES"; }
    cout << "NO";
           
}

int main() {
    fast_io;
    solve();
    return 0;
}