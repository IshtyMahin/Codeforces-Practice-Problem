#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
void ishty()
{
    ll n;
    cin >> n;
    string s,s1="";
    cin >> s;
    map<char, ll> m;
    for (auto &x : s)
    {
        m[x]++;
    }
  
    for (auto &x : m)
    {
        if (x.second % n != 0)
        {
            cout << -1 << nl;
            return;
        }

        ll l = x.second / n;
        while(l--)
        {
            s1 += x.first;
        }
    }

    while (n--)
    {
      cout << s1;
    }

}
int main()
{
  ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
 
  ishty();
}