#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     ll n;
     cin>>n;
     ll c=1;
     while(n>c*5){
         n -=c*5;
         c*=2;
        
     }
     
     ll p = (n-1)/c;
     if(p==0){
        cout<<"Sheldon";
     }
     else if(p==1){
        cout<<"Leonard";
         
     }
     else if(p==2){
        cout<<"Penny";
     }
     else if(p==3){
        cout<<"Rajesh";
     }
     else{
        cout<<"Howard";
     }

}