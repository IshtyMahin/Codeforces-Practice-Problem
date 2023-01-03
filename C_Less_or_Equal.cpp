#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
int main()
{
    ll n, k;
    cin >> n >> k;
    vl v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (k == 0)
    {
        if (v[0] == 1)
            cout << -1;
        else if (v[0] > 1)
            cout << 1;
    }
    
    else if (k<n)
    {
        if (v[k - 1] != v[k] )
            cout << v[k-1];
        else 
           cout<<-1;
        
    }

    else
        {
            cout << v[k - 1];
        }

}