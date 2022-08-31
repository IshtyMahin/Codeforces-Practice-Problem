#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long int a[4];
    long long int x,b,c;
    
    for(int i=0;i<4;i++){
          cin>>a[i];
          
    }

    sort(a,a+4);
    x=a[3]-a[0];
    b=a[3]-a[1];
    c=a[3]-a[2];
    
    cout<<x<<" "<<b<<" "<<c;
}