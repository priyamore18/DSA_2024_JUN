#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char a[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s++]==a[e--]){
            return true;
        }
    }
    return false;
}
int main(){

    char a[100];
    cin>>a;
    int n=strlen(a);

   if( palindrome(a,n)){
    cout<<"it is the palindrome";

   }else{
    cout<<"it is not palindrome";
   }
   
   
   return 0;
}