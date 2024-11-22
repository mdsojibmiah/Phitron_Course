#include <iostream>
using namespace std;
int main(){
	int n,m; cin >> n >> m;
	if(n<=m){
		for(int i=n;i<=m;i++){
			cout << i << " ";
		}
	}
	else{
		for(int i=n;i<=23;i++){
			cout << i << " ";
		}
		for(int i=0;i<=m;i++){
			cout << i << " ";
		}
	}

	return 0;
}