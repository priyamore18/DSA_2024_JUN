#include<iostream>
using namespace std;

void merge(int arr1[],int arr2[],int a,int b,int arr3[]){
            int i=0; int j=0;int k=0;
            while(i<a &&j<b){
                if(arr1[i]<arr2[j]){
                    arr3[k]=arr1[i];
                    k++;
                    i++;
                }else{
                   arr3[k]=arr2[j];
                    k++;
                    j++; 
                }
            }
    while (i < a) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements from arr2 (if any)
     while (j < b) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
 
int main(){
    int a;
    int b;
   
    cin>>a;
    cin>>b;
    
    int arr3[a+b];

    int arr1[a];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
    }
    int arr2[b];
    for(int i=0;i<b;i++){
        cin>>arr2[i];
    }
   merge(arr1,arr2,a,b,arr3);
   
   for(int i=0;i<a+b;i++){
      cout<<arr3[i];
   }
   return 0;

}