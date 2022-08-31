#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,total=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        total=total+(a[n-1]-a[i]);
    }
    cout<<total;

}