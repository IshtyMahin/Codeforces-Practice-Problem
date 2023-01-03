#include<bits/stdc++.h>
using namespace std;
int main(){
 
        int a, b, c;
        cin>>a>>b>>c;
        int p =min((a + b) * 2, a + b + c);
        p = min((a + c) * 2, p);
        p = min((b + c) * 2, p);

        cout<<p;
}