#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    ll a[t],b[t];
    for(ll i =0 ;i<t;i++){
        cin>>a[i]>>b[i];
    }
    ll count=0;
    for(ll i=0;i<t;i++){
        for(ll j=0;j<t;j++){
            if(a[i]==b[j]){
               count++;
            } 
        }
    }
    cout<<count;
}