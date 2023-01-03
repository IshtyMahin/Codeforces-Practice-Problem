#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;

using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second

const int INF = (int)1e9 + 77;
const int N = 500500;
pii a[N];
int sufMin[N];
int n, k;

void solve() {
	cin>>n>>k;
	for (int i = 0; i < n; i++)
		cin>>a[i].first;
	for (int i = 0; i < n; i++)
		cin>>a[i].second;

	sort(a, a + n);
	sufMin[n] = INF;
	for (int i = n - 1; i >= 0; i--){
		sufMin[i] = min(sufMin[i + 1], a[i].second);}


	int x = 0;
	int y = 0;
	while(k > 0) {
		x+= k;
		while(y < n && a[y].first <= x) y++;
		if (y == n) {
			cout<<"YES"<<endl;
			return;
		}
		k -= sufMin[y];
	}
	cout<<"NO"<<endl;
}

int main()
{

//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int t;
	scanf("%d", &t);
	while(t--) solve();

	return 0;
}
