#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,t,t1,t2=0,count=0,i=1;
    cin>>n>>t;
    t1 = 4*60 -t;
    for(int i=1;i<=n;i++){
        t2=i*5 + t2;
        if(t2<=t1){
            count++;
        }
    }
    cout<<count;
}