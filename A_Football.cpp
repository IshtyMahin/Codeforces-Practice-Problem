#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count=1,count1=1;
    cin>>s;
    for(int i=0; i<s.length();i++){

          if(s[i]==s[i+1]){
             count++;
             if(count==7){
                break;
             }
          }
          else{
            count=1;
          }
    }
    
    if(count==7){
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }
}