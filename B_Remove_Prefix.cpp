#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    set<ll>s;
    for (ll i = n -1; i >= 0; i--)
    {
     if(s.find(v[i])!=s.end()){
        break;
     }
       s.insert(v[i]);  
    }
    cout<<n-s.size()<<endl;
    
    
}
int main()
{
    ll tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
}