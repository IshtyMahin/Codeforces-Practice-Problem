#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define nl endl
#define vl vector<ll>

void solve()
{
    ll n;
    cin >> n;
    vl v(n);
    ll o = 0, e = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i]&1)
            o++;
        else
            e++;
    }
    if (o % 4 == 0 || o % 4 == 3)
    {
        cout << "Alice" << nl;
        return;
    }
    if (o % 4 == 2)
    {
        cout << "Bob" << nl;
        return;
    }
    if(o % 4 == 1)
    {
        if(e&1)
            cout << "Alice" << nl;
        else
            cout << "Bob" << nl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--){
        solve(); 
    };
}
