/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 02 / 09 / 2025
   Time  : 21:54
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
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;

        int len = s.length(), cnt = 0;

        for (int i = 0; i < len - 1; i++) {
            if (s[i] == s[i + 1]) cnt++;
        }

        cout << len - cnt << endl;
    }              
}

int main() {
    fast_io;
    solve();
    return 0;
}