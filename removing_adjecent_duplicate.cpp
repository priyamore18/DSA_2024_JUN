#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
 string play_adjecent(string s){
    string res;
    for(int i=0;i<s.size();i++){
        char a=s[i];
        if(res.size()>0 && res.back()==a){
            res.pop_back();
        }
        else{
            res.push_back(a);
        }
    }
    return res;
 }
int main(){
    string s;
    cout<<"enter the string ";
    cin>> s;

    cout<<"the afte removing the string"<<play_adjecent( s);
    return 0;
}