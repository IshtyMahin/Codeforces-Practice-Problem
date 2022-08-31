#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1,s2,s3;
    int count=0;
    cin>>s1>>s2>>s3;
    s = s1+s2;
    sort(s.begin(),s.end());
    sort(s3.begin(),s3.end());
    
    if(s==s3){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}