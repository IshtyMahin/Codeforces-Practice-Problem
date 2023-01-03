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
        ll n;
        cin >> n;
        if (n == 9)
            cout << 1 << nl;

        else if (n > 9 && n % 10 < 9)
            cout << n / 10 << nl;

        else if (n > 9 && n % 10 == 9)
            cout << n / 10 + 1 << nl;

        else
            cout << 0 << nl;
    }
}