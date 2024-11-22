#include <iostream>
using namespace std;
int main(){
	int a, b, c; cin >>a >>b >>c;
	if(a==b && b==c){
		cout << "They are equal" << endl;
	}
	else if(a==b && a>c){
		cout << "A and B both are bigger" << endl;
	}
	else if(a==c && a>b){
		cout << "A and C both are bigger" << endl;
	}
	else if(b==c && b>a){
		cout << "B and C both are bigger" << endl;
	}
	return 0;

}


