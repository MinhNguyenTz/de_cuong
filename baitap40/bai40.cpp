#include <bits/stdc++.h>

using namespace std;
namespace {
	// macros definitions
	#define all(a)  (a).begin(),  (a).end()
	#define rall(a) (a).rbegin(), (a).rend()
	#define ft first
	#define se second
	#define f1(i, v) for (int i = 1, _n_ = (v); i <= _n_; i++)
	#define f0(i, v) for (int i = 0, _n_ = (v); i < _n_; i++)
	#define el cout << "\n"
	#define ll long long
}

const int maxN = 1e5 + 7;

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	freopen ("bai40.inp", "r", stdin);
	freopen ("bai40.out", "w", stdout);
			
	ll n; cin >> n;
	while (n--){
		ll a, b; cin >> a >> b;
		ll x = min(a,b), y = max(a, b);
		ll tmp = x;
		if (x == y) tmp = x*2;

		cout << (y*(y+1)/2) - (x*(x+1)/2) + tmp; el;
	}
	return 0;
}
