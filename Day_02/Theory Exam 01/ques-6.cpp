#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num2 % num1 == 0) {
        cout << "The second number is divisible by the first number." << endl;
    } else if (num1 % num2 == 0) {
        cout << "The first number is divisible by the second number." << endl;
    } else {
        cout << "Neither number is divisible by the other." << endl;
    }

    return 0;
}
