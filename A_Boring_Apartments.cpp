#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int num = stoi(s);

        int rem = (num % 10 - 1) * 10;

        for (int i = 1; i <= n; i++)
        {
            rem = rem + i;
        }

        cout << rem << endl;
    }
}