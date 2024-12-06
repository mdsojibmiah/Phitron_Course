/*  Author:Error_404_Coder
    Problem Name : Minimize Number 
    Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) cin >> A[i];

    int operations = 0;
    while (true) {
        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) {
                cout << operations << endl;
                return 0;
            }
        }
        for (int i = 0; i < N; ++i) A[i] /= 2;
        ++operations;
    }
}
