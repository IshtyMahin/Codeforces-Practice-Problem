#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,S=0,D=0;
    cin>>n;
    int a[n];
    vector<int>p;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
         int big=max(a[i],a[n-1]);
        //  cout<<big<<" ";
         p.push_back(big);
        if(big == a[n-1]){
            n--;
            i--;
        }
        
    }
    
    for(int i=0;i<p.size();i++){
        if(i%2==1){
            D=D+p[i];
        }
        else{
            S=S+p[i];
        }
    }

    cout<<S<<" "<<D;
    
    

}