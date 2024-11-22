#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	if(n>0){
		for(int i=1;i<=n;++i){
			cout << i << " ";
		}
	}
	else{
		for(int i=1;i>=n;--i){
			cout << i << " ";
		}
	}

	return 0;
}