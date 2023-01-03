#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vl v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vl p(n + 1, 0);
        // for(ll i=0;i<n;i++){
        //     cout<<p[i]<<" ";
        // }
        while (q--)
        {
            ll l, r, m;
            cin >> l >> r >> m;

           
            
        }

        
        for (ll i = 0; i < n; i++)
        {
            cout << p[i] << " ";
        }

        cout << nl;
    }
}