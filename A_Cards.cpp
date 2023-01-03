#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     string s;
     cin>>s;
     ll x=0;
     for(ll i=0;i<n;i++){
        if(s[i]=='n'){
            x++;
            cout<<1<<" ";
        }
        
     }
     x= (n-(x*3))/4;
     for(ll i=0;i<x;i++){
        cout<<0<<" ";
     }
     
}