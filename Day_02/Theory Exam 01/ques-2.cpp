#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b,c,d; cin >> a >> b >>c >>d;
	int largest = max({a,b,c,d});
	int smallest = min({a,b,c,d});
	cout << "Largest = " << largest << endl;
	cout << "Smallest = " << smallest << endl;
	return 0;
}