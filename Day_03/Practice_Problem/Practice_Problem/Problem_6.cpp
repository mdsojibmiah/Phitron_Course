#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            cout << "  ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; --j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
