#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool equal(int count1[26],int count2[26]){
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return 0;
        }
    }
    return 1;
}
bool checkInclusion(string s1,string s2){
     
     int count1[26]={0};
     for(int i=0;i<s1.length();i++){
         int index=s1[i]-'a';
         count1[index]++;

     }

     // first frame 
      int i=0;
      int window_size= s1.length();
      int count2[26]={0};
      while(i<window_size && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
      }

      if(equal(count1,count2)){
        return 1;
      }
      // for the next frame or window

      while(i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;

        char ch=s2[i-window_size];
        index=ch-'a';
        count2[index]--;

        if(equal(count1,count2)){
            return 1;
        }
        i++;


         
        

      }
      return 0;
}

int main(){
    string s1;
    string s2;
    cout<<"enter the s1";
    cin>>s1;
    cout<<"enter the s2";
    cin>>s2;

    if(checkInclusion( s1, s2)){
        cout<<"true";
    }else{
        cout<<"false";
    }

 return 0;
}