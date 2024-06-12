#include<iostream>
#include <cstring>
#include<algorithm>
using namespace std;
 void reverse(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(a[s++],a[e--]);
    }
}
int main(){
    char a[100];
    cin>>a;
    int n;
    n=strlen(a);
    reverse(a,n);
    cout<<"the reverse the sting"<<"\n"<<a; 
    return 0;
}