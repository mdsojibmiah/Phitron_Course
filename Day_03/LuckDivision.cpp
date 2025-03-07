/* Author: CodeWithError
   Email: mdsojibmiah.coder@gmail.com
   Date  : 03 / 06 / 2025
   Time  : 18:44
   Problem Link: https://codeforces.com/problemset/problem/122/A
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

bool isLucky(int y) {
    while (y) {
        if (y % 10 != 4 && y % 10 != 7) return false;
        y /= 10;
    }
    return true;
}
int main() {
    fast_io;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}