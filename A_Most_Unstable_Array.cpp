#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        if(n==1){
            cout<<0<<endl;
        }
        else if(n==2){
            cout<<x<<endl;


        }
        else{
            cout<<x*2<<endl;
        }
    }
}