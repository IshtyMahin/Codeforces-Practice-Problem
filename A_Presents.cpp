#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,b;
    cin>>x;
    int a[105];
    for(int i =1; i<=x;i++){
        cin>>b;
        a[b] = i;
    }
    for(int i =1; i<=x;i++){
        cout<<a[i]<<' ';
    }
}