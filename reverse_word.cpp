#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

 void reverse(char a[],int n,int s,int e){
    
    while(s<e){
        swap(a[s++],a[e--]);
    }
 }
 void space_word(char a[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        if((a[i]==' ')||(a[i]=='\0')){
            
            reverse(a,n,s,i-1);
            s=i+1;

            

    }

    }
    
    
 }
int main(){
    char a[100];
    cin.getline(a,100);3
    int n=strlen(a);
    space_word(a, n);
    cout<<a;
    return 0;



}