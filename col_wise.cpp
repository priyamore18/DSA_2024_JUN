#include<iostream>
using namespace std;

int colSum(int a[][3],int row,int col){
    cout<<"the sum of the rows";
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=a[j][i];
            
        }
        cout<<sum;
        cout<<endl;


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

    colSum( a,4,3);

    
   
    return 0;
}