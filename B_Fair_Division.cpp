#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum1=0,sum2=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            
        }
        sort(a,a+n);
        sum1= a[n-1];
        for(int i=n-2;i>=0;i--){
            if(sum1>sum2){
                sum2 = sum2+a[i];
            }
            else{
                sum1= sum1+a[i];
            }
        }
      
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

    }
}