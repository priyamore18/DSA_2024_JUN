#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int trans(int a[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=i+1;j<col;j++){
            swap(a[i][j],a[j][i]);   
        } 
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0, k = col - 1; j < k; j++, k--) {
            swap(a[i][j], a[i][k]);
        }
    }
}
        
        
        



int main(){
    int a[3][3];

    //int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    trans(a,3,3);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    
   
    return 0;
}