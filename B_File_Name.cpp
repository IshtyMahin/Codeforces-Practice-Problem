#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n,c=0;
     cin>>n;
     string s;
     cin>>s;
     for(ll i=1;i<n-1;i++){
        if(s[i]=='x' && s[i-1]=='x' && s[i+1]=='x'){
           c++;
        }
     }

     cout<<c;

}