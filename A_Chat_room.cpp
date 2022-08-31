#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    string s1="hello";
    int j=0,pas=0;
    for(int i =0; i<s.length();i++){
          if(s[i]==s1[j]){
            j++;
            pas++;
            if(pas==5){
                break;
            }
          }
    }
    if(pas==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}