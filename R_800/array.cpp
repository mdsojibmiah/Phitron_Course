/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 10 / 2025
   Time  : 20:55
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
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            for (int j = 1; j <= m; j++) cout << "#";
        } else {
            if (i % 4 == 2) {
                for (int j = 1; j < m; j++) cout << ".";
                cout << "#";
            } else {
                cout << "#";
                for (int j = 2; j <= m; j++) cout << ".";
            }
        }
        cout << nl;
    }
                  
}

int main() {
    fast_io;
    solve();
    return 0;
}