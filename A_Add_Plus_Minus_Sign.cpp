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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll x=0;
        if(s[0]=='1'){
            x=1;
        }
        for(ll i=1;i<n;i++){
            if(s[i]=='1' && x==1){
                cout<<"-";
                x=0;
            }
            else{
                cout<<"+";
                if(s[i]=='1')x=1;
            }
        }
        cout<<nl;
     }
}