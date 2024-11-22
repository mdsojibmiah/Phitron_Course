#include <iostream>
using namespace std;
int main(){
	int n,index;cin >> n;
	int arr[n];
	int max=arr[0];
	// input array 
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	// check maximum
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	cout << max;

	return 0;
}