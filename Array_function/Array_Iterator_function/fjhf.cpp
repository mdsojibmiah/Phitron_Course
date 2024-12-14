/* Author: Error_404_Coder
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    fio;
    ll n, l, a;cin >> n >> l >> a;
    ll ans = 0, prev = 0;
    for (ll i = 0; i < n; i++) {
        ll t, d;
        cin >> t >> d;
        ans += (t - prev) / a;
        prev = t + d;
    }
    ans += (l - prev) / a;
    cout << ans << "\n";
    return 0;
}