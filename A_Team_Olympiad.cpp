#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    vector<int>one;
    vector<int>two;
    vector<int>three;
    for(int i =0; i<n;i++){
        cin>>a[i];
        if(a[i]==1){
            one.push_back(i);
        }
        else if(a[i]==2){
            two.push_back(i);
        }
        else{
            three.push_back(i);
        }
    }
    int x=one.size(),y=two.size(),z=three.size();
    
    int sml = min(x,min(y,z)) ;
    cout<<sml<<endl;
    for(int i=0;i<sml;i++){
        cout<<one[i]+1<<" ";
        cout<<two[i]+1<<" ";
        cout<<three[i]+1<<endl;
    }
    
    
    
}