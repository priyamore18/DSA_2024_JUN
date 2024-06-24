#include<iostream>
using namespace std;
bool ispresent(int a[][3],int target,int row,int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==target){
                return 1;
            }
        }

}
return 0;
}
int main(){
    int a[4][3];

    //int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    int target;
    cout<<"enter the target";
    cin>>target;
  
  
  if(ispresent(a,target,4,3)){
    cout<<"the element is present";
  }
  else{
    cout<<"the element is not present";
  }
   
    return 0;
}