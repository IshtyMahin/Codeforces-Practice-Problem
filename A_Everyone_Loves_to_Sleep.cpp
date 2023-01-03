#include<bits/stdc++.h>
using namespace std;
 #define ll long long
int main(){
    int t; 
    cin>>t;
    while(t--){
        ll n, h, m,h1,m1,A;
        cin>>n>>h>>m;
        ll p =(h*60) + m;
        ll ans= INT_MAX;
        for(int i =0; i<n;i++){
            cin>>h1>>m1;
            ll p1 = h1*60 + m1;
            ll diff = p1-p;
            if(diff<0){
                diff += 24*60 ;
            }
            ans=min(ans,diff);  
 
        }
        cout<<ans/60<<" "<<ans%60<<endl;
        
    }
}