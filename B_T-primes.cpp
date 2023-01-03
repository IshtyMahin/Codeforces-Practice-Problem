#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll ;
 
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
 
#define yes cout<<"YES"<<nl
#define no  cout<<"NO"<<nl
#define nl  '\n'
 
# define F first
# define S second
# define R return
# define C continue 
# define pb push_back 
# define pf push_front
# define mp make_pair
 
# define vi vector <int>
# define vl vector <ll>
# define vs vector <string>
#define si     set<int>
#define sl     set<ll>
 
#define CIN(v)  for(auto &it:v) cin>>it;
#define COUT(v) for(auto &it:v) cout<<it<<space;cout<<nl;
#define bug(x) cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
const int MAX = 1000001;
bool prime[MAX];

void sieve ()
{
    int i,j;
    prime[0] = prime[1] = true;

    for (i=4; i<MAX; i+=2)
        prime[i] = true;

    for (i=3; i*i<=MAX; i+=2)
        if (!prime[i])
            for (j=i*i; j<MAX; j+=2*i)
                prime[j] = true;
}
void solve () {
  sieve();
  int n;
  cin>>n;
  while(n--){
    ll x;
    cin>>x;
    ll y = sqrt(x);
    
    if(!prime[y] && y*y == x)cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    
  }
}

int main() {
   FAST ;
   
   
   solve () ;
  
  return 0 ;
}