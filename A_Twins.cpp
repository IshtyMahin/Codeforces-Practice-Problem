#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,rem=0,sum=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        rem = rem +a[i];
    }
    sort(a,a+n);
    for(int i=n-1;i>=0;i--){
        sum=sum+a[i];
        rem = rem -a[i];
        count++;
        if(sum>rem){
           
            break;
        }
    }

    cout<<count;

}