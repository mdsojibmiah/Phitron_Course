#include <iostream>
using namespace std;
int main(){
	int a, b; cin >> a >> b;
	if(a>b){
		cout << "A is bigger";
	}
	else if(a<b){
		cout << "B is bigger";
	}
	else{
		cout << "They are equal";
	}
	return 0;
}