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

    string s,s1;
    ll n;
    cin >> n;
    cin >> s1;
    for (ll i = n-1; i >=0; i--)
    {
        if (s1[i] == '0')
        {
            ll x = s1[i-1] - '0';
            ll y = s1[i-2] - '0';
            ll z = y*10 + x;
            s.push_back('a'+z-1);
            i-=2;
        }
        else {
            ll x = s1[i] - '0' ;
            s.push_back('a'+x-1);
        }
    }
    reverse(all(s));
    cout<<s;

    nl;
}
int main()
{
    tst
    {
        solve();
    }
}