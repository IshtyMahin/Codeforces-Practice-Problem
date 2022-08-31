#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll t,count=0,count2=0;
    cin>>t;
    ll a[t];
    for(ll i=0;i<t;i++){
        cin>>a[i];
    }

    for(ll i=0;i<t;i++){
        if(count==0 && a[i]==-1){
            count2++;
        }
        else{
            count=count+a[i];
        }
    }

    
    cout<<count2;

    

}
