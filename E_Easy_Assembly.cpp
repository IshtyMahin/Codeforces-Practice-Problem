#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll t ;
     cin>>t;
     ll p=t,s=0,c=0;
     while(t--){
        ll n;
        cin>>n;
        vl v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        if(t+1!=p){
           c +=n;
           s +=n-1;
        }
        
     }

     cout<<s<<" "<<c<<nl;
}