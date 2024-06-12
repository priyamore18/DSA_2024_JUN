#include<iostream>
using namespace std;
void sum(int arr1[],int a,int arr[],int b){

    int i=a-1;
    int j=b-1;
    int carry=0;
    
    while(i>=0 && j>=0){

        int num1=arr1[i];
        int num2=arr[j];

        int sum=num1+num2;
        carry=sum/10;
        sum=sum%10;

        i--;
        j--;
        
    }

    while(i>=0){
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        i--;
    }
     while(j>=0){
        int sum=arr[j]+carry;
        carry=sum/10;
        sum=sum%10;
        j--;
    }
    while(carry!=0){
        
        int sum=carry;
        carry=sum/10;
        sum=sum%10;

    }
        
}
int main(){
    cout<<"enter the number first";
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++){
        arr[i];
    }

    cout<<"enter the number second";
    int b;
    cin>>b;
    int arr1[b];
    for(int i=0;i<b;i++){
        arr1[i];
    }

}