#include <bits/stdc++.h>
using namespace std;
template <typename typC>
istream &operator>>(istream &cin, vector<typC> &a)
{
    for (auto &x : a)
        cin >> x;
    return cin;
}
typedef long long ll;
typedef unsigned long long ull;
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define tr ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define Max 1000000000000000014
#define Min -1000000000000000014
#define PI 3.1415926535897
#define Fr first
#define Se second
#define all(v) v.begin(), v.end()
#define mem(a, v) memset(a, v, sizeof(a))
#define space ' '
#define COUT(v)              \
    for (auto it : v)        \
        cout << it << space; \
    cout << nl;
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define msi multiset<int>
#define msl multiset<ll>
#define pii pair<int, int>
#define pil pair<int, ll>
#define pli pair<ll, int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define error cout << -1 << nl
void solve()
{
    ll n;
    cin >> n;
    ll a[n];

    ll sum = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    vi div = divisors(sum);

    ll ans = n;

    if (div.size() <= 2)
    {
        cout << n << endl;
        return;
    }

    for (auto x : div)
    {

        ll req = sum / x;
        bool b = false;

        ll s = 0;
        ll thick = 0;

        ll mx = 0;

        for (int i = 0; i < n; ++i)
        {
            s += a[i];
            thick++;

            if (s == req)
            {
                mx = max(thick, mx);
                s = 0;
                thick = 0;
            }
            else if (s > req)
            {
                b = true;
                break;
            }
        }

        if (!b)
        {
            ans = min(ans, mx);
        }
    }
    cout << ans << endl;
}
int main()
{
    tst
    {
        solve();
    }
}