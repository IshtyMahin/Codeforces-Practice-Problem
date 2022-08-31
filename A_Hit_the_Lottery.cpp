#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll  n,hun,tew,ten,five ,one;
    cin>>n;
    hun = n/100;

    tew = (n%100)/20;
    
    ten=(n%100)%20/10;
    five =(n%100)%20%10/5;
    one = (n%100)%20%10%5;
    cout<<hun+tew+ten+five+one;

    }