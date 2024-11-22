#include <iostream>
using namespace std;
int main(){
	long long  n,k,coutn =0;cin >> n >> k;
	for(int i=1;i<=n;i+=2){
		coutn++;
		if(coutn==k){
			cout<<i;
		}
	}
	for(int i=2;i<=n;i+=2){
	coutn++;
		if(coutn==k){
			cout<<i;
		}
	}

	return 0;
}