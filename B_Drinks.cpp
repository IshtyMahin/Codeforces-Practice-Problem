#include<bits/stdc++.h>
using namespace std;

int main(){
    long long i,n;
    double sum=0.0 , ans=0.0; 
    cin>>n;
    
    int a[n];

    for( i = 0; i<n;i++){
        cin>>a[i];
        sum= sum+a[i];
    }
    ans = sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;
}