/* Author: mdsojibmiah
   Email: mdsojibmiah.coder@gmail.com
   Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ld PI = acos(-1.0);
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    fast_io;
    int n;
    string s;
    cin >> n >> s;
    int count_8 = count(s.begin(), s.end(), '8');
    int max_phone_numbers = min(count_8, n / 11);
    cout << max_phone_numbers << endl;
    return 0;
}