#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int arr[n];
	int i,max,sec_max;
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	max=sec_max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			sec_max=max;
			max = arr[i];
		}
		else if(arr[i]>sec_max && arr[i]<max){
			sec_max = arr[i];
		}
	}

	if(max==sec_max){
	cout << "Max value ->> " << max << endl;

}else
	cout << "Second max value ->> " << sec_max;
	return 0;
} 