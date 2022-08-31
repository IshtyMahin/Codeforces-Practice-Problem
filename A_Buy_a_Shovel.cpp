#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    
    for(int i=1;i<=10;i++){
          int q=n*i -x;
           if(q%10==0 || n*i%10==0){
             cout<<i;
             break;
           }
    }
}