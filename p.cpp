#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n,c;
    cin>>n;
    if(n%2==0){
        c=n/2;
        cout<<c<<endl;
        for(int i=1;i<=c;i++){
            cout<<2<<" ";
        }
    }
    else{
        c=(n-3)/2;
        cout<<c+1<<endl;
        for(int i=1;i<=c;i++){
            cout<<2<<" ";
        }
        cout<<3;
    }

}