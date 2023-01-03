#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))

#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'

#define F first
#define S second
#define R return
#define C continue
#define pb push_back
#define pf push_front
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define si set<int>
#define sl set<ll>

#define CIN(v)         \
    for (auto &it : v) \
        cin >> it;
#define COUT(v)              \
    for (auto &it : v)       \
        cout << it << space; \
    cout << nl;

#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl;
#define all(v) (v).begin(), (v).end()
#define allrev(v) (v).rbegin(), (v).rend()
#define allcomp(v) v.begin(), v.end(), comp
#define allrevcomp(v) v.rbegin(), v.rend(), comp

#define dist(a, b, p, q) sqrt((p - a) * (p - a) + (q - b) * (q - b))

#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

///////////////////////////////////////////////////////////////////////////////////////

void solve()
{
    ll n, k;
    cin >> n >> k;
    vll v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if(v.size()==k){
                cout<<i<<nl;
                return;
            }
        }
    }
    ll x = v.size();
    ll y = sqrt(n);

    

    if (y * y == n)
    {
        if (x * 2 - 1 < k)
        {
            cout << -1;
            return;
        }
        ll p = k - x;
        cout << n / v[v.size() - p - 1];
    }
    else
    {
        if (x * 2 < k)
        {
            cout << -1;
            return;
        }
        ll p = k - x;

        cout << n / v[v.size() - p];
    }
}

int main()
{
    FAST;
    solve();
    return 0;
}