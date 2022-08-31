#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n,x,max1=0;
        cin>>a>>b>>c>>n;
        max1 = max(a,max(b,c));
        x=n - ((max1-a)+(max1-b)+(max1-c));
   
      
        if(x>=0 && x%3==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}