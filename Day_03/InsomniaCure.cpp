/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 05 / 2025
   Time  : 21:27
   Problem Link: 
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
    int k, l, m, n, d, count = 0;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1; i <= d; i++)
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            count++;
    cout << count << nl;            
}

int main() {
    fast_io;
    solve();
    return 0;
}