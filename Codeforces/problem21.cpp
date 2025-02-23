/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 23 / 2025
   Time  : 21:36
   Problem Link: https://codeforces.com/problemset/problem/160/A
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
    int n, s = 0, m = 0, c = 0;
    cin >> n;
    
    vector<int> a(n);
    for (int &x : a) {
        cin >> x;
        s += x;
    }
    
    sort(a.rbegin(), a.rend());

    for (int x : a) {
        m += x;
        c++;
        if (m > s - m) break;
    }

    cout << c << nl;             
}

int main() {
    fast_io;
    solve();
    return 0;
}