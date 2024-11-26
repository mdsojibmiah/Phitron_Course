#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    cout << "Enter the total student = ";
    cin>>n;
    cout << "Enter the total subject = ";
    cin>>s;
    float sum = 0.0,avg,x;
    for(int i=1;i<=n;i++){
        cout << "Enter the " << i << " Student =";
        for(int j=1;j<=s;j++){
            cin>>x;
            sum+=x;
        }
        avg = sum/s;
        cout << "Average = " << avg <<endl;
    }

    return 0;
}