#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
        
    }
    long long max=a[0],min=a[0];
    int index =0;
    int index2=0;
    for(int i=0;i<n;i++){

        if(a[i]>max){
            index=i;
            max=a[i];
        }
        if(a[i]<=min){
           index2=i;
           min=a[i];
        }
    }
  
    if(index<index2){
        cout<<index+(n-1-index2);
    }
   else{
    cout<<index+(n-1-index2)-1;
   }
}