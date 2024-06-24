#include<iostream>
using namespace std;
int waveprint(int a[][3],int row,int col,int target){
    int start=0;
    int end=row*col-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;
        int element=a[mid/col][mid%col];

        if(target==element){
            return mid;
        }
        if(element>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
        start+(end-start)/2;
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