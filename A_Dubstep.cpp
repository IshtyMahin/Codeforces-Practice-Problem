#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define max3(a, b, c) max(a, max(b, c))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define min3(a, b, c) min(a, min(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl cout << endl
#define tr ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define tst   \
    int t;    \
    cin >> t; \
    while (t--)
#define Max 1000000000000000014
#define Min -1000000000000000014
#define PI 3.1415926535897
#define Fr first
#define Se second
#define all(v) v.begin(), v.end()
#define mem(a, v) memset(a, v, sizeof(a))
#define space ' '
#define COUT(v)              \
    for (auto it : v)        \
        cout << it << space; \
    cout << nl;
#define vi vector<int>
#define vl vector<ll>
#define si set<int>
#define sl set<ll>
#define msi multiset<int>
#define msl multiset<ll>
#define pii pair<int, int>
#define pil pair<int, ll>
#define pli pair<ll, int>
#define pll pair<ll, ll>
#define mp make_pair
#define pb push_back
#define error cout << -1 << nl
#define REP(i, a, b) for (int i = a; i <= b; i++)
void solve()
{
    //   string s;
    //   cin>>s;
    //   string s1;

    //   for( ll i= 0; i < s.size(); i++)
    //   {

    //     if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){

    //         s1 = s1 + " ";
    //         i=i+2;
    //         continue;
    //     }
    //     else{
    //         s1=s1+s[i];
    //     }
    //   }

    //   for(ll i=0;i<s1.size();i++){
    //     if(isspace(s1[i]) && isspace(s1[i-1])){
    //         continue;
    //     }
    //     else{
    //     cout<<s1[i];
    //     }
    //   }

    string s;
    int flag = 1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            if (!flag)
            {
                flag =1;
                cout << " ";
            }
            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }
}
int main()
{
    solve();
}