#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	while(n!=1){
		cout << "->  " << n << endl;
		if(n%2==0){
			n/=2;
		}
		else{
			n=3*n+1;
		}
	}
	cout << n ;
	 return 0;
}