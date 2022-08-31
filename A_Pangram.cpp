#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    
    set<char>s1;
    for(int i=0; i<t;i++){
      char ch = tolower(s[i]);
      s1.insert(ch);
    }
    if(s1.size()==26){
         cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}