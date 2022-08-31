#include<bits/stdc++.h>
using namespace std;

int main(){
     int p[250];
    int n,x,y,count=0;
    cin>>n;
    cin>>x;
    
    for(int i=0; i<x;i++){
        cin>>p[i];
    }
  
    cin>>y;
    
    for(int i=x; i<x+y;i++){
        cin>>p[i];  
    }

    sort(p,p+(x+y));

    for(int i=0; i<x+y;i++){
        if(p[i] !=p[i+1]){
            count++;
        }
    }
// cout<<count;
    if(count==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }

}