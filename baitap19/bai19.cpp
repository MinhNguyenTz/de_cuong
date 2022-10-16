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

ll pw (ll x, ll n){
	n--;
	while (n--) x *= x;
	return x;
}
ll t (ll n, ll a){
	ll ans = 1;
	for (int i = 2; i <= n; i++) ans += pw(i, a);
	return ans;
}

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai19.inp", "r", stdin);
    freopen ("bai19.out", "w", stdout);
			
	ll a, n; cin >> a >> n;
	cout << t(n, a); // Bị tràn với test lớn

	return 0;
}
