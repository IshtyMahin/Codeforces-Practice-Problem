#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int w, h, n, count = 1 ;
    cin >> w >> h >> n;
     if(n==1){
      cout<<"YES"<<endl;
      continue;
     }
     while(w%2==0){
      count *=2;
      w=w/2;
     }
     while (h%2==0)
     {
        count *=2;
        h= h/2;
     }
     
    if(n<=count){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }


  }
}