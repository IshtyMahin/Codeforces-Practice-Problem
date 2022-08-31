#include<bits/stdc++.h>
typedef long long  ll;
using namespace std;

int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n,sml1=1000000000,sml2=1000000000;
        cin>>n;
        ll a[n];
        ll b[n];
        for(ll i=0; i<n;i++){
            cin>>a[i];
            sml1=min(sml1,a[i]);
        }
        for(ll i=0; i<n;i++){
            cin>>b[i];
            sml2=min(sml2,b[i]);
        }

        ll t=0;
        for(ll i=0;i<n;i++){
            ll t1 = a[i]-sml1;
            ll t2 = b[i]-sml2;
          
            t = t + max(t1,t2);
        }
        cout<<t;
        cout<<endl;
    }



    return 0;
    
}