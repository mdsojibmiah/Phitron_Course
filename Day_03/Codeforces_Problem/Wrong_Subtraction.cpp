// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k,t;cin>>n>>k;
//     for(int i=0;i<k;i++){
//        t=(n%10==0)?n/10:n--;
//         // if(n%10==0){
//         //     n/=10;
//         // }
//         // else{
//         //     n--;
//         // }

//     }
//     cout << t;
//     return 0;

// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    while (k--) n = (n % 10 == 0 ? n / 10 : n - 1);
    cout << n;
    return 0;
}
