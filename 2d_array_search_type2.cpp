#include<iostream>
using namespace std;
int waveprint(int a[][3],int row,int col,int target){
    int start=0;
    int end=row*col-1;
    
    int index_row=0;
    int index_col=col-1;

    while(start<=end){
        
        int element=a[index_row][index_col];

        if(target==element){
            return 1;
                   }
        if(element>target){
            index_col--;
        }else{
            index_row++;
        }
       
    }
   return -1; 
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

   
    int b=waveprint(a,4,3,2);
    
    
    
    if(b!= -1){
        cout<<"element fount";
    }else{
        cout<<"element not fount";
    }


    
   
    return 0;
}