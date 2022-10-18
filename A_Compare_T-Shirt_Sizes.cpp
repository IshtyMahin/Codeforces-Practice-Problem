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
    int n1, n2, x1=0, x2=0;
    string s1, s2;
    cin >> s1 >> s2;
    n1 = s1.size();
    n2 = s2.size();

    for (ll i = 0; i < s1.size(); i++)
    {
        if (s1[i] == 'X')
        {
            x1++;
        }
    }
    for (ll i = 0; i < s2.size(); i++)
    {
        if (s2[i] == 'X')
        {
            x2++;
        }
    }

    if (s1 == s2)
    {
        cout << "=";
    }

    else if (s1[n1 - 1] == s2[n2 - 1])
    {
        if (s1[n1 - 1] == 'S')
        {

            if (x1 > x2)
            {
                cout << '<';
            }
            else
            {
                cout << '>';
            }
        }
        else if (s1[n1 - 1] == 'L')
        {
            if (x1 > x2)
            {
                cout << '>';
            }
            else
            {
                cout << '<';
            }
        }
        else
        {
            cout << "=";
        }
    }

    else
    {
        if (s1[n1 - 1] == 'S')
        {
            cout << "<";
        }
        else if (s1[n1 - 1] == 'M')
        {
            if (s2[n2 - 1] == 'S')
            {
                cout << ">";
            }
            else
            {
                cout << "<";
            }
        }
        else
        {
            cout << ">";
        }
    }

    nl;
}
int main()
{
    tst
    {
        solve();
    }
}