#include <iostream>
using namespace std;
int main(){
	int a=5,b=13;
	int temp = a;
	a=b;
	b=temp;
	cout << a << " and " << b;
	return 0;
}