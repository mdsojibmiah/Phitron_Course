#include <iostream>
using namespace std;
int main(){
	int n,h,sum=0,w;cin >> n >> h;
	for(int i=1;i<=n;i++){
		int a;cin >>a;
		w = (a<=h)?sum+=1:sum+=2;
	}
	cout << w;
	return 0;
}