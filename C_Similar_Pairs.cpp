#include <bits/stdc++.h>
using namespace std;
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
    ll n, p = 0, ev=0, odd=0,diff=0;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            ev++;
        }
        else
        {
            odd++;
        }
    }
    sort(all(v));
    for (ll i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1])==1){
            diff++;
        }
    }

    if (ev % 2 == 0 && odd % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else if (ev % 2 == 1 && odd % 2 == 1)
    {
        if (diff >= 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    else if (ev != odd)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    tst
    {
        solve();
    }
}