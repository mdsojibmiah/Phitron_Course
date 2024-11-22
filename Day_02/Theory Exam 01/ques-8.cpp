#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int lcm = (num1 * num2) / gcd(num1, num2);
    cout << "The LCM of " << num1 << " and " << num2 << " is " << lcm << "." << endl;

    return 0;
}
