#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define vl vector <ll>
#define nl  '\n'
# define all(v) (v).begin() , (v).end()
int main(){
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k)cout<<"NO"<<endl;

        else if(k==1){
            cout<<"YES"<<endl;
            cout<<n<<endl;
        }
        else if(n%2==0){
            if(k%2==0){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }
            else if(k*2<=n){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<2<<" ";
                }
                cout<<n-(k-1)*2<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else{
            if(k%2==1){
                cout<<"YES"<<endl;
                for(int i=1;i<k;i++){
                    cout<<1<<" ";
                }
                cout<<n-(k-1)<<endl;
            }
            else cout<<"NO"<<endl;
        }
     }
}