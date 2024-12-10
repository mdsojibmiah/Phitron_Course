/*
    Author: Error_404_Coder
    Problem name: Reverse an array
    Problem Link: https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
