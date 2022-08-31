#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t; 
    cin>>t;
    while(t--){
        ll a,b,sum;
        cin>>a>>b;
        sum=abs(a-b);
       
        if(sum%10!=0 && sum!=0){
            cout<<sum/10+1<<endl;
        }
        else{
            cout<<sum/10<<endl;
        }
    }
}