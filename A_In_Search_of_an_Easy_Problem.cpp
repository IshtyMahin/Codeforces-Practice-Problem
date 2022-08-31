 #include<bits/stdc++.h>

using namespace std;

int main(){
    int t,x,c=0;
    cin>>t;
    while(t--){
        cin>>x;
        if(x>0){
            c++;
        }
    }
    if(c>0){
        cout<<"HARD";

    }
    else{
        cout<<"EASY";
    }
}