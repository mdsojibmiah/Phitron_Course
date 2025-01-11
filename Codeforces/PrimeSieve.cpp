/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 01 / 11 / 2025
   Time  : 12:16
   Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355493/problem/P21
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()

const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve() {
    int n, c = 0;
    cin >> n;
    cout.tie(0);
    for (int i = 2; i <= n; i++) {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        if (is_prime) {
            c++;
            cout << i << " ";
        }
    }

}

int main() {
    fast_io;
    solve();
    return 0;
}