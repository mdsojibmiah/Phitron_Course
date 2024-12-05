#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string s;getline(cin,s);
    int i=0,count=0,con=0,con_c=0;
    while(s[i]!='\0'){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
        else if(s[i]==' '){
            con++;
        }
        else{
            con_c++;
        }
        i++;
    }
    cout<<"Vowles count = "<< count<<endl;
    cout <<"Cons Count = "<< con_c << endl;


    return 0;
}