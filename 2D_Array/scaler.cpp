#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;cin>>row>>col;
    int a[row][col];
    if(row!=col){
        cout<<"Diagonal must be Squre matrix"<<endl;
    }
    // Input array 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    // Diagonal matrix check
    if(row==col){
        int flag=1,x=a[0][0];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(i==j){
                    if(a[i][j]!=x){
                        flag++;
                    }
                    continue;
                }
                if(a[i][j]!=0){
                    flag++;
                }
            }
        }
        if(flag==1){
        cout<< "Scalar";
        }
        else{
        cout<<"Not Scalar";
        }
    }

    else{
        cout<<"Not Scalar"<<endl;
    }
    return 0;
}