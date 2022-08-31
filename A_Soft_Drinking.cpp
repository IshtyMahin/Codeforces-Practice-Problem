#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int L = k*l/nl;
    int X = c*d;
    int P = p/np;

    int sml = min(L,min(X,P));

    cout<<sml/n;
}