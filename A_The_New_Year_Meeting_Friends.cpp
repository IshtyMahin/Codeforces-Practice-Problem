#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll a[3],big=0,sml=100,total;
    for(int i=0;i<3;i++){
        cin>>a[i];
        big=max(big,a[i]);
        sml=min(sml,a[i]);
    }
    
    for(int i=0;i<3;i++){
        if(a[i]!=big && a[i]!=sml){
            total = (big-a[i])+(a[i]-sml);
        }
    }
    cout<<total;

}