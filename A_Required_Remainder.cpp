#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
   ll t;
   cin>>t;
   while(t--){
    ll x,y,z;
      cin>>x>>y>>z;
      cout<<(z- ((z-y)%x) )<<endl;
   }


    return 0;
}