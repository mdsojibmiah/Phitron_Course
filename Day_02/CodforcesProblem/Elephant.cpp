#include <iostream>
using namespace std;
int main(){
	int n;cin >> n;
	int s = (n/5) + (n%5!=0);
	cout << s;
	return 0;
}