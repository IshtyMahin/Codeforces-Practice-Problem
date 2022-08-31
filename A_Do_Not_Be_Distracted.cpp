#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        string s,s1="YES";
        cin>>s;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                for(int j=i+2;j<n;j++){
                    if(s[i]==s[j]){
                        s1="NO";
                    }
                }
            }
        }

        cout<<s1<<endl;
    }
   


    return 0;
}