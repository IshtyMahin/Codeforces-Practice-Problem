#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
const ll p=1e9+7;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
     ll x;
     x=n*(n+1)%p;
     x= (x*(2*n +1))%p;
     x=(x*(2022/6))%p;   

     ll z= ((n-1)*(n))%p;
     z=(z*(n+1))%p;
     z=(z*(2022/3))%p;
     
     
     ll ans = (x+z)%p;
    
     cout<<ans<<endl;
    }
}