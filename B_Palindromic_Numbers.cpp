#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   for(int i =0 ; i<n;i++){
       int x;
       cin>>x;
       string s;
       cin>>s;
       string s2 = s;
      
       
       for(int i = 0; i < x;i++){
         if(s[i] !=  s[x-1-i] || s[i] < s[x-1-i]){
              s[i] = s[x-1-i];
          }
          else if(s[i] !=  s[x-1-i] || s[i] > s[x-1-i]){
            s[x-1-i] = s[i];
          }
          
       }
       int res = stoi(s) - stoi(s2);
       cout<<res<<endl;
   }
    return 0;
}