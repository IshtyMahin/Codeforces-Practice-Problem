#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll count = 0, t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
        {
            count = count + 20;
        }
        else if (s == "Dodecahedron")
        {
            count = count + 12;
        }
        else if (s == "Octahedron")
        {
            count = count + 8;
        }
        else if (s == "Cube")
        {
            count = count + 6;
        }
        else if (s == "Tetrahedron")
        {
            count = count + 4;
        }
    }
    cout<<count;
}