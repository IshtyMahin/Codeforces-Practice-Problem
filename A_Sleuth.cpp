#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string s,s1;
     while(s[s.size()-1]!='?'){
        s1=s;
        cin>>s;
     }
    
     char c;
     if(s=="?"){
         c = toupper(s1[s1.size()-1])  ; 
      }
     else{
          c = toupper(s[s.size()-2])  ; 
     }
 
    if(c=='Y'||c=='A'||c=='E' || c==  'I'|| c=='O'||c=='U'){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
    }
     
     
}