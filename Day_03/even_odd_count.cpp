#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n];
	int e_count,o_count;
	e_count=0;
	o_count=0;

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		(arr[i]%2==0?e_count++:o_count++);
	}
	cout << "Even number_Count =  " << e_count << endl;
	cout << "Odd number_Count  =  " << o_count;
	return 0;
}