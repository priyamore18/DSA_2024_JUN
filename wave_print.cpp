#include<iostream>
using namespace std;
int waveprint(int a[][3],int row,int col){
    for(int j=0;j<col;j++){
        if(j&1){
            for(int i=row-1;i>=0;i--){
                cout<<a[i][j];
                
            }
        }else{
            for(
                int i=0;i<row;i++){
                cout<<a[i][j];
                
            }
        }
        
    }
}
int main(){
    int a[4][3];

    //int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    waveprint(a,4,3);

    
   
    return 0;
}