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
        ll p,q;
        cin>>p>>q;
        if(p==0){
            cout<<1<<endl;
            
        }
        else{
            cout<<p+q*2+1<<endl;
        }

     }
}