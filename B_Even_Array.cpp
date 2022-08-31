#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x=0,y=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n;i++){
            cin>>a[i];
            if(i%2==1 && a[i]%2!=1){
                x++;
            }
            else if((i==0 ||i%2==0) && a[i]%2!=0){
                y++;
            }
        }
        if(x==y){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}