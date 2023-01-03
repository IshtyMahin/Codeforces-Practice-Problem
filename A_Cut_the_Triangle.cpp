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
        
        ll a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        cin>>c1>>c2;

        if(a1!=b1 && a1!=c1 && b1!=c1)cout<<"YES"<<endl;
        else  if(a2!=b2 && a2!=c2 && b2!=c2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

     }
}