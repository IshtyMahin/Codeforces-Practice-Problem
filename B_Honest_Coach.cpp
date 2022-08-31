#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sml=100000;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
             for(int j=i+1;j<n;j++){
                sml = min(sml,abs(a[i]-a[j]));
             }
        }
        cout<<sml<<endl;
    }
}