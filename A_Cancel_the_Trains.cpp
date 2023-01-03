#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;
# define pb push_back 
# define vi vector <int>
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
          int n,m;
          cin>>n>>m;
          set<int> v;

          for(int i=0;i<n+m;i++){
              int x;
              cin>>x;
              v.insert(x);
          }
         cout<<n+m-v.size();
         cout<<endl;
     }
}

    