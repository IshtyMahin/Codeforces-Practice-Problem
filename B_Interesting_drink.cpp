#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    vector<ll>::iterator lower, upper;

    ll q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        lower = lower_bound(v.begin(), v.end(), x);
        upper = upper_bound(v.begin(), v.end(), x);

        cout << (upper - v.begin()) << '\n';
    }
}