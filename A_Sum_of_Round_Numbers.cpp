#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;

        cin>>s;
        int q = s.length();
        long long n = stoi(s);
        vector<int>a;
        for(int i = 1;i<=q;i++){
            int y =pow(10,i);
            if(n/y<=y/10 && n%y==0){
                a.push_back(n);
                break;
            }
            else if(n%y!=0){
                a.push_back(n%y);
                n= n - (n%y);
            }
        }
        cout<<a.size()<<endl;
        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}