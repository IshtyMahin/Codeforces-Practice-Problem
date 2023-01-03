#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;

     for(ll i=sqrt(n);i>0;i--){
         if(n%i==0 && lcm(i,n/i)==n){
              cout<<i<<" "<<n/i<<nl;
              break;
         }
     }
     
}