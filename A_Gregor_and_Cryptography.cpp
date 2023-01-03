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
        cout<<2<<" ";
        if(n&1)cout<<n-1<<nl;
        else cout<<n<<nl;
     }
}