#include<iostream>
using namespace std;
 void roated(int arr[],int n,int k){
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[(i+k)%n]=arr[i];
        }
          
          for(int i=0;i<n;i++){
         arr[i]=arr1[i];
        }
           
 }



int main(){
    int n;
    cin>>n;
    int arr[n];
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the values";
    cin>>k;

    roated(arr,n,k);
    cout<<"the Roated array by the specific";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }


}