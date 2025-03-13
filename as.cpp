#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] << "\n";
        return;
    }

    sort(a.begin(), a.end()); // ছোট থেকে বড় সাজানো

    // সর্বোচ্চ তিনটি উপাদান নিয়ে পরীক্ষা করা
    int max_val = 0;
    for (int i = n - 1; i >= 2; i--) {
        if (a[i - 1] + a[i - 2] > a[i]) { // ট্রায়াঙ্গেল ইনইকুয়ালিটি চেক
            max_val = a[i - 1] + a[i - 2] + a[i];
            break;
        }
    }

    cout << max_val << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
