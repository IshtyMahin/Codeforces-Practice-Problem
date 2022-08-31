#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=1,big=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
         if(a[i]<=a[i+1]){
            count++;
            big = max(count,big);
         }
         else{
            
            count=1;
         }
    }
    n==1?big=1 : big;
    big==0? big=1 : big;
    cout<<big;
}