/*  Author:Error_404_Coder
    Problem Name : Binary_Search 
    Link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    unordered_set<int> elements;
    int num;

    for (int i = 0; i < N; ++i) {
        cin >> num;
        elements.insert(num);
    }

    for (int i = 0; i < Q; ++i) {
        cin >> num;
        if (elements.count(num)) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }

    return 0;
}
