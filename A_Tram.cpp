#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    int total = 0;
    int maxi = 0;
    for(int i =0; i<t;i++){
        int a,b;
        cin>>a>>b;
        total=(total + a -b);
        maxi = max(maxi,total);
        
    }
    cout<<maxi;
}