#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	if(n<=32){
		cout << "F";
	}
	else if(n<=39){
		cout << "D";
	}
	else if(n<=49){
		cout << "C";
	}
	else if (n<=59){
		cout << "B";
	}
	else if (n<=69){
		cout << "A-";
	}
	else if(n<=79){
		cout << "A";
	}
	else if(n<=100){
		cout << "A+";
	}
	return 0;
}