#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    if (row != col) {
        cout << "Diagonal must be Square matrix" << endl;
        return 0;
    }

    int a[row][col];
    bool isDiagonal = true;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
            if (i != j && a[i][j] != 0) {
                isDiagonal = false;
            }
        }
    }

    if (isDiagonal) {
        cout << "Diagonal" << endl;
    } else {
        cout << "Not Diagonal" << endl;
    }

    return 0;
}
