/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 03 / 2025
   Time  : 21:07
   Problem Link: https://codeforces.com/problemset/problem/996/A
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
    int n, c = 0;
    cin >> n;
    c += n / 100; n %= 100;
    c += n / 20; n %= 20;
    c += n / 10; n %= 10;
    c += n / 5; n %= 5;
    c += n;
    cout << c << nl;             
}

int main() {
    fast_io;
    solve();
    return 0;
}