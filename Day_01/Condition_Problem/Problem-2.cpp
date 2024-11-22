#include <iostream>
using namespace std;
int main(){
	int a, b, c; cin >>a >>b >>c;
	if(a>b && a>c){
		cout << "A is bigger" << endl;
	}
	else if(a<b && b>c){
		cout << "B is bigger" << endl;
	}
	else if(c>a && c>b){
		cout << "C is bigger" << endl;
	}
	else if(a==b && b==c){
		cout << "They are equal" << endl;
	}
	return 0;

}