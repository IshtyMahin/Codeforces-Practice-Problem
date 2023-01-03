#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vl vector <int>
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define    error  cout<<-1<<nl
# define all(v) (v).begin() , (v).end()
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
int main(){
  FAST ;
  
    int t;
    cin>>t;
 
    while(t--){
          int n;
          cin>>n;
          vl v(n);
          for(int i=0;i<n;i++){
            cin>>v[i];
          }
          int x= v[0];
          int y =v[0];
          
          for(int i=0;i<n;i++){
            x =x |v[i];
            y = y & v[i];
          }
          cout<<x-y<<endl;
     }
}