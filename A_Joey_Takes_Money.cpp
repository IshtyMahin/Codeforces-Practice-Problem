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
          vl v(n);
          ll prod=1;
          for(ll i=0;i<n;i++){
            cin>>v[i];
            prod*=v[i];
          }
          ll ans = (prod+(n-1))*2022;
          cout<<ans<<endl;
     }
}