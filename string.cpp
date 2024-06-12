#include<iostream>
#include<cstring>
using namespace std;
// reverse 
void revers(char a[],int n){
    int s=0;
    int end=n-1;
    for(int i=n-1;i>=0;i--){
        cout<<a[i];
    }

}
int main(){
    int n;
    cin>>n;
    char a[100];
    n=strlen(a);
    cin>>a;

   
    revers(a,n);

    return 0;

}