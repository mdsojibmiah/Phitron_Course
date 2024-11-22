#include <iostream>
using namespace std;
int main(){
	long long int n,coutn=0; cin >> n;
	while(n!=0){
		n/=10;
		coutn++;
	}
	cout <<  coutn << " digits";
	return 0;
}