#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,x,y,c=0;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x<= y-2){
            c++;
        }
    }

    cout<<c;



}