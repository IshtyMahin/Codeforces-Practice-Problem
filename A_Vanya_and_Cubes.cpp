#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, c = 0, i = 1;
    cin >> n;
    while (x < n)
    {
        x = x + i;
      
        n = n - x;
        if (n >= 0)
        {
            c++;
        }

        i++;
    }

    cout << c;
}