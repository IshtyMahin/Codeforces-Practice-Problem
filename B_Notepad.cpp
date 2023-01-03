#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define error cout << -1 << nl

#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int t)
{
    int n;
    string s;
    cin >> n >> s;
    set<string> st;
    for (int i = 0; i < n - 1; i++)
    {
        if (st.count(s.substr(i, 2)) == 1)
        {
            cout << "YES" << '\n';
            return;
        }
        if (i >= 1)
        {
            st.insert(s.substr(i - 1, 2));
        }
    }
    cout << "NO" << '\n';
}
    int main()
    {
        FAST;
        int t = 1;
        cin >> t;
        while (t--)
        {
            solve(t);
        }
        return 0;
    }