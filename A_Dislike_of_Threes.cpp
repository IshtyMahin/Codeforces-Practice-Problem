#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int t, sum;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i < 10000; i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            else if(n==1){
                sum =i ;
                break;
            }
            else{
                n--;
            }
        }
        cout<<sum<<endl;
        
    }

    return 0;
}
