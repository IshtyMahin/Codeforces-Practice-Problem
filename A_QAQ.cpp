#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     string s;
     cin>>s;
     ll cnt , x,y;
     cnt=x=y=0;

     for(ll i=0;i<s.size();i++){
        if(s[i]=='Q'){
            cnt+=x;
            y++;
        }
        else if(s[i]=='A'){
            x+=y;
        }
     }
     cout<<cnt<<endl;
}