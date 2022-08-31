#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    
    for(int i =0 ; i<n;i++){
        long long num =0;
        long x,y;
        cin>>x;
        cin>>y;

        num = y * (y+1) /2;
        for(int  i = 2 ; i <= x; i++){
            num = num  + (i-1)*y + y;
        }
        cout<<num<<endl;
       }
       
    }
    

