#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int b;
    cin >> b; // যেহেতু m = 1, তাই একবারই ইনপুট নিতে হবে।
    
    for (int i = 0; i < n; i++) {
        a[i] = b - a[i]; // নতুন ভ্যালু সেট করছি
    }
    
    // চেক করবো নতুন অ্যারে sorted কিনা
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            cout << "NO\n";
            return;
        }
    }
    
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}
