#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int h, m, x;
        cin>>h>>m;

        x = (24-h)*60 - m;
        cout<<x<<endl;

    }
}