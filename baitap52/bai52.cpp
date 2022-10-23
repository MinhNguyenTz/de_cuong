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

const int maxN = 1e6 + 2;
ll a[maxN];

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai52.inp", "r", stdin);
    freopen ("bai52.out", "w", stdout);
			
	a[0] = 0;
	int n, d; cin >> n >> d;

	ll prefix = 0;
	for (int i = 1; i <= n; i++){
		int x; cin >> x;
		a[i] = x + a[i - 1];
		if (i >= d) prefix = max(prefix, a[i] - a[i - d]);
	}

	cout << prefix;
	return 0;
}
