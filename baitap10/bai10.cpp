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

bool is_prime (ll p){
	if (p == 2) return true;
	for (int i = 2; i*i <= p;){
		if (!(p%i)) return false;
		(i == 2)? i++ : i += 2;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai10.inp", "r", stdin);
    freopen ("bai10.out", "w", stdout);
			
	ll p = 2, n; cin >> n;
	ll s = (1LL << (p - 1)) * ((1LL << p) - 1);

	while (s <= n){
		if (!is_prime(p)){
			p++;
			continue;
		}
		s = (1LL << (p - 1)) * ((1LL << p) - 1);
		if (s == n){
			cout << "Yes";
			return 0;
		}
		p++;
	}
	cout << "No";
	return 0;
}
