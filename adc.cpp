/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 13 / 2025
   Time  : 22:39
   Problem Link: https://codeforces.com/problemset/problem/750/A
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
    int n, k, timeLeft = 240 - k, count = 0;
    for (int i = 1; i <= n && timeLeft >= 5 * i; i++) {
        timeLeft -= 5 * i;
        count++;
    }
    cout << count << nl;        
}

int main() {
    fast_io;
    solve();
    return 0;
}