#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        
        int a[4];
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int max1 = max(a[0],a[1]);
        int min1 = min(a[0],a[1]);
        int max2 = max(a[2],a[3]);
        int min2 = min(a[2],a[3]);
        
       
        if(min2<=max1 && min1<=max2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}