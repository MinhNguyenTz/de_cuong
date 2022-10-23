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
    freopen ("bai56.inp", "r", stdin);
    freopen ("bai56.out", "w", stdout);
			
	ll index = 0, ans = 0;
	ll n; cin >> n;
	while (n){
		if (n % 10 == 1) ans += (1LL << index);
		index++;
		n/=10;
	}
	cout << ans;
	return 0;
}
