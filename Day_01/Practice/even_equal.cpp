#include <iostream>
using namespace std;
int main(){
	int w; cin >> w;
	if(w%2==0 && w!=2){
		cout << "YES";
	}
	cout << endl << "If number is even and equal to divide" <<endl;
	if(w%4==0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
