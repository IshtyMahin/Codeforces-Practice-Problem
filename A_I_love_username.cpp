#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll n,count=0;
   cin>>n;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll big= a[0],sml=a[0];

   for(int i=1;i<n;i++){
       if(a[i]>big){
          big=a[i];
          count++;
       }
       else if(a[i]<sml){
        sml= a[i];
        count++;
       }
   }
   cout<<count;
}