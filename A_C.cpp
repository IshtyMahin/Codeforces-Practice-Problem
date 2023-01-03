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
        ll a, b, n, cnt = 0;
        cin >> a >> b >> n;
        ll sum = 0;
        while (sum <= n){
           if (a > b)
            {
                b += a;
                sum = b;
                cnt++;
            }
            else
            {
                a += b;
                sum = a;
                cnt++;
            }

            if(sum>n){
                break;
            }
        }
        cout<<cnt<<endl;
    }
}