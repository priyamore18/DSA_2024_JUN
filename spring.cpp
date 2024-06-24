#include<iostream>
using namespace std;
int waveprint(int a[][3],int row,int col){
    int startRow=0;
    int startCol=0;
    int endRow=row-1;
    int endcol=col-1;
    int count=0;
    
    int total=col* row;
    while(count<total){
        for(int index=startCol;count<total && index<=endcol;index++){
            cout<<a[startRow][index];
            count++;
        }
        startRow++;
        for(int index=startRow;count<total && index<=endRow;index++){
            cout<<a[index][endcol];
            count++;
            
        }
        endcol--;
        for(int index=endcol;count<total && index>=startCol;index--){
            cout<<a[endRow][index];
            count++;
           

        }
         endRow--;
        for(int index=endRow;count<total && index>=startRow;index--){
            cout<<a[index][startCol];
            count++;
        }
        startCol++;
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