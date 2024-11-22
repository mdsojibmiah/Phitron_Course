#include <iostream>
using namespace std;
int main(){
	int n;cin >> n;
	int s;
	if(n%5==0){
		s=n/5;
	}
	else{
		s=(n/5)+1;
	}
	cout << s;
	return 0;
}