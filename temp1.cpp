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
   for (ll j = 1; j <= t; j++)
   {
      ll n, x;
      long double c = 0;
      cin >> n >> x;
      for (ll i = 1; i <= n; i++)
      {
         c += log(i);
      }

      long long p =ceil(c/log(x));
      cout<<p<<endl;
      
   }
}