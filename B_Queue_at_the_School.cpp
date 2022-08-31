#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    string s;
    cin>>s;
    
        for(int i=0; i<x;i++){
         for(int i =0 ; i<s.length();i++){
           if(s[i]=='B'&&s[i+1] == 'G'){
              s[i]='G';
              s[i+1] ='B';
              i++;
           } 
       }
        }
    
    cout<<s;
}