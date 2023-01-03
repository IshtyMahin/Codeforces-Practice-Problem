#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))

#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define nl '\n'

#define F first
#define S second
#define R return
#define C continue
#define pb push_back
#define pf push_front
#define mp make_pair

#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define si set<int>
#define sl set<ll>

#define CIN(v)         \
    for (auto &it : v) \
        cin >> it;
#define COUT(v)            \
    for (auto &it : v)     \
        cout << it << " "; \
    cout << nl;
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl;
#define all(v) (v).begin(), (v).end()
#define allrev(v) (v).rbegin(), (v).rend()
#define allcomp(v) v.begin(), v.end(), comp
#define allrevcomp(v) v.rbegin(), v.rend(), comp

#define FAST                           \
    ios_base ::sync_with_stdio(false); \
    cin.tie(0);                        \
    cout.tie(0)

void solve(int test_case)
{

    string s;
    cin >> s;
    int n = s.size();

    char mn = '9';

    for (int i = n - 1; i >= 0; i--)
    {
        mn = min(mn, s[i]);

        if (s[i] != '9' and s[i] > mn)
        {
            s[i]++;
        }
    }
    sort(s.begin(), s.end());

    cout << s << endl;
}

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        solve(tc);
    }
    return 0;
}