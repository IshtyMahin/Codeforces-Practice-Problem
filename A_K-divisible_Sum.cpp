#include<bits/stdc++.h>
using namespace std;
 
typedef double D ;
typedef long long ll ;
typedef long double ld ;
typedef unsigned int ui ;
typedef unsigned long long ull ;
 
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
 
#define yes cout<<"YES"<<endl
#define no  cout<<"NO"<<endl
#define nl  endl
 
# define F first
# define S second
# define R return
# define C continue 
# define pb push_back 
# define pf push_front
# define mp make_pair
 
# define vi vector <int>
# define vb vector <bool>
# define vc vector <char>
# define vll vector <ll>
# define vs vector <string>
 
# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >
 
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
 
# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >
# define vvpii vector < vector < pii > >
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp

# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))

# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
 
const ll MOD = 1e9 + 7 ;
const int infi =  INT_MAX ;
const ll infll =  LLONG_MAX ;
const ld PI = 3.1415926535897932384626 ;

const int dx[] = {-1 , 0 , 1 , 0} ;
const int dy[] = {0 , 1 , 0 , -1} ;
 
///////////////////////////////////////////////////////////////////////////////////////
bool isprime(ll n) {
    for (ll i = 2 ; i * i <= n ; ++i)
        if (n % i == 0) {
        return false ;
}
    return true;
}

ll gcd(ll a, ll b) {
    if (b == 0) {
        return a ;
}
    else {
      return gcd (b , a % b) ;
}
}

ll lcm(ll a, ll b) {
    return ((a / gcd(a , b)) * b) ;
}

///////////////////////////////////////////////////////////////////////////////////////

void solve (int test_case) {
  ll a,b;
  cin>>a>>b;
  if(a%b==0){
    cout<<'1'<<endl;
  }
  else if(b%a==0){
    cout<<b/a<<endl;
  }
  else if(a>b){
     cout<<2<<endl;
  }
  else{
    cout<<(b/a)+1<<endl;
  }
}

int main() {
   FAST ;
   //#ifndef ONLINE_JUDGE
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   //#endif
   int tc = 1 ;
   cin >> tc ;
   while (tc--) {
   solve (tc) ;
  }
  return 0 ;
}