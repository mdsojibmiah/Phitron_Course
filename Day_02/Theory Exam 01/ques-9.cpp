#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "The factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i;
            if (i < num) {
                cout << ", ";
            }
        }
    }
    cout << "." << endl;

    return 0;
}
