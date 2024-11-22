#include <iostream>
using namespace std;
int main(){
	int n,w; 
	int sum =0;
	int i=1;
	cin >> n;
	while(i<=n){
		cin >> w;
		sum+=w;
		i++;
	}
	cout << sum;


	return 0;
}