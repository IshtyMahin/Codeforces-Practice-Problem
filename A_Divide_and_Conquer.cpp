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
        ll n, sum = 0;
        cin >> n;
        vl v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (sum % 2 == 0)
            cout << 0 << nl;
        else
        {
            ll ans = 1e18 + 5;
            for (int i = 0; i < n; i++)
            {
                ll cnt = 0;
                if (v[i] % 2)
                {
                    while (v[i] % 2 && v[i] > 0)
                    {
                        v[i] /= 2;
                        ++cnt;
                    }
                }
                else
                {
                    while (v[i] % 2 == 0 && v[i] > 0)
                    {
                        v[i] /= 2;
                        ++cnt;
                    }
                }
                ans = min(ans, cnt);
            }
            cout << ans << endl;
        }
    }
}