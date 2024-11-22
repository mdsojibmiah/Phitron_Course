#include <iostream>
using namespace std;
int main(){
	int n; cin >> n;
	int choc = n;
	int pack = n;
	while(pack>=4){
		choc+= (pack/4);
		pack = (pack/4) + (pack%4);
	}
	cout << choc << endl;


	return 0;
}