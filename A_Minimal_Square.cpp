#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,Dsml,Big;
        cin>>x>>y;

        Dsml=2*(min(x,y));
        Big=max(x,y);

        cout<<pow(max(Dsml,Big),2)<<endl;
        
    }
}