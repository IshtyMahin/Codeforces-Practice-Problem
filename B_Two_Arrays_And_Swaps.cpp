#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, sum = 0;
        cin >> n >> m;
        ll a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b, b + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && m != 0)
            {
                swap(a[i], b[i]);
                sum = sum + a[i];
                m--;
            }
            else
            {

                sum = sum + a[i];
            }
        }
        cout << sum << endl;
    }

    return 0;
}