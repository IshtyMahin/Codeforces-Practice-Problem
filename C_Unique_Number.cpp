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
        ll n;
        cin>>n;
        ll p= log10(n)+1;
        ll x = 9,sum = 0;
        vector<ll>v;
        if(n < 10){
            cout<<n<<endl;
            continue;
        }
        while(x > 0){
            if(n - sum >= x){
                sum += x;
                v.push_back(x);
            }
            x--;
        }

        if(sum != n){
            cout<<-1<<endl;
        }
        else{
            sort(v.begin(), v.end());
            for(ll i=0;i<v.size();i++){
                cout<<v[i];
            }
            cout<<endl;
        }
     }
}