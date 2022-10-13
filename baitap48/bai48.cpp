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
	#define LL_MIN LONG_LONG_MIN
	#define LL_MAX LONG_LONG_MAX
}

const int maxN = 1e5 + 7;

bool is_prime (ll x){
	if (x < 2) return false;
	else if (x == 2) return true;

	for (int i = 2; i*i <= x;){
		if (!(x%i)) return false;
		(i & 1)? i += 2: i++;
	}

	return true;
}
int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai48.inp", "r", stdin);
    freopen ("bai48.out", "w", stdout);
			
	int n; cin >> n;
	ll cnt = 0, max_n = LL_MIN, pos = LL_MIN;
	f1(i, n){
		ll a; cin >> a;
		if (is_prime(a)){
			cnt++;
			if (max_n < a && i > pos){
				max_n = a;
				pos = i;
			}
		}
	}

	if (!cnt) cout << "khong co";
	else cout << cnt << " " << max_n << " " << pos;

	return 0;
}
