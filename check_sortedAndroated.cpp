#include<iostream>
using namespace std;
 int check(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }

       
    }
    if(arr[n-1]>arr[0]){
            count++;
    }
    
    
    return count;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int a= check(arr,n);
   if(a<=1){
    cout<<"the array is the sorted and roated";
   }else{
    cout<<"it is not";
   }
}