#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vl vector<ll>
#define nl '\n'
#define all(v) (v).begin(), (v).end()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans=0;
        for (int i = 1; i <= 9; i++)
        {
            int x = i;
            while (x <= n)
            {
                x *= 10;
                ans++;
            }
        }

        cout<<ans<<endl;
    }
}