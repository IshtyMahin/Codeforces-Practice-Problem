#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        long long d, n, sum1=0,sum2=0;
        cin>>n;
        d =n/2;

        if(d%2!=0){
             cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i =2;i<=n ;i=i+2){
                cout<<i<<" ";
                sum1 = sum1+i;
            }
            for(int i =1; i<n-1; i=i+2){
                cout<<i<<" ";
                sum2 = sum2 +i;
            }
            cout<<sum1-sum2<<endl;

        }
        
    }
}