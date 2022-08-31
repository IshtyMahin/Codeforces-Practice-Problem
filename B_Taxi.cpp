#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, one = 0, two = 0, three = 0, four = 0, avg = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            one++;
        }
        else if (a[i] == 2)
        {
            two++;
        }
        else if (a[i] == 3)
        {
            three++;
        }
        else
        {
            four++;
        }
    }

    

    int OtoTh = min(one, three);

    one = one - OtoTh;
    three = three - OtoTh;

    int atwo = two / 2;

    two = two % 2;

    avg = (two * 2 + one );
    avg % 4 == 0 ? avg = (two * 2 + one ) / 4 : avg = (two * 2 + one) / 4 + 1;
   
    cout << (OtoTh + four + atwo + avg + three);
}
