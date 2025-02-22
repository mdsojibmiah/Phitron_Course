#include <iostream>
using namespace std;

int main() {
    int n, p, q, x;
    cin >> n;
    bool levels[n + 1] = {};
    
    cin >> p;
    while (p--) {
        cin >> x;
        levels[x] = true;
    }
    
    cin >> q;
    while (q--) {
        cin >> x;
        levels[x] = true;
    }
    
    for (int i = 1; i <= n; i++) {
        if (!levels[i]) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    
    cout << "I become the guy." << endl;
}
