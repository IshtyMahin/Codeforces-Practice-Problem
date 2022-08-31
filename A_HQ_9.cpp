#include<bits/stdc++.h>
using namespace std;

int  main(){
    string s;
    int c=0;
    cin>>s;
    for(int i=0; i<s.size();i++){
        if(s[i]=='Q' || s[i]=='H' || s[i]=='9'){
            c=1;
        }
    }
    if(c==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}