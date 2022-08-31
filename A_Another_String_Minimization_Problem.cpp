#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int x, y;

    while (t--)
    {
        cin >> x >> y;
        string s;
        int a[x];

        for (int i = 0; i < x; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < y; i++)
        {
            if (min(a[0], y + 1 - a[0]) - 1 == i)
            {
                s[i] ='A';
            }
            
            
            else if(a[i]-1 == i)
            {
                s[i] = 'A';
            }
            else{
                s[i]= 'B';
            }
        }
        for (int i = 0; i < y; i++)
        {
            cout << s[i];
        }

        cout << endl;
    }
}