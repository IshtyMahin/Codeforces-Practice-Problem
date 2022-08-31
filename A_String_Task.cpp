#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0; i<s.length();i++){
        char ch = tolower(s[i]);
        if(ch == 'o' || ch=='u'||ch=='e'||ch=='y'||ch=='a'||ch=='i'){
            cout<<"";
            
        }
        else{
            cout<<"."<<ch;
        }
    }
}