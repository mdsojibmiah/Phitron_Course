#include <iostream>
using namespace std;
int main() {
    int n,index=0;cin>>n;
    int a[n];
    int min = a[0];
    for(int i=0;i<n;i++){
        cin >>a[i];
    }
    for(int i=1;i<n;i++){
        if(min<a[i]){
            min=a[i];
            index++;
        }
    }

    cout << min << index;
    return 0;
}