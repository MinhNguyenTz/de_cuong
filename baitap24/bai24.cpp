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

const int maxN = 1e6;
ll a[maxN];

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai24.inp", "r", stdin);
    freopen ("bai24.out", "w", stdout);
			
	int n; cin >> n;
	ll tong = 0;
	f0(i, n) cin >> a[i];

	for (int i = 1; i < n - 1; i++)
		if (a[i - 1] + a[i + 1] == a[i])
			tong += a[i - 1] + a[i + 1];

	cout << tong;
	return 0;
}
