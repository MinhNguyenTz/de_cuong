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
unordered_map<ll,ll> memo;

ll fib(ll x){
	if (x <= 0) return 0;
	if (x == 1) return 1;
	if (memo.count(x)) return memo[x];

	ll result = fib(x - 1) + fib(x - 2);
	memo[x] = result;
	return result;
}

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai11.inp", "r", stdin);
    freopen ("bai11.out", "w", stdout);
			
	ll n; cin >> n;
	cout << fib(n);
	// Bị tràn
	return 0;
}
