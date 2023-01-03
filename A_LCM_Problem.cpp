#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll t;
     cin>>t;
     while(t--){
        ll p,q;
        cin>>p>>q;
        if(q<2*p){
            cout<<-1<<" "<<-1<<nl;
        }
        else{
            cout<<p<<" "<<p*2<<nl;
        }
     }
}