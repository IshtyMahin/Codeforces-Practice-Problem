#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll a[4], sum = 0;
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;

    for (ll i = 0; i < s.size(); i++)
    {
        
        if (s[i] == '1')
        {
            sum = sum + a[0];
        }
        else if (s[i] == '2')
        {
            sum = sum + a[1];
        }
        else if (s[i] == '3')
        {
            sum = sum + a[2];
        }
        else if(s[i] == '4'){
            sum = sum + a[3];
        }
    }
   cout<<sum;
    return 0;
}