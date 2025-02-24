/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 24 / 2025
   Time  : 22:23
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
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
        cout << (a[i] != b[i]);
    cout << nl;            
}

int main() {
    fast_io;
    solve();
    return 0;
}