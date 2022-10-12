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
    freopen ("bai6.inp", "r", stdin);
    freopen ("bai6.out", "w", stdout);
			
	ll m, n, k, t; cin >> m >> n >> k >> t;
	ll P = m*m + n*(k+t)*(k+t), T = m + n + k + t;
	(!(P%T))? cout << "TRUE": cout << "FALSE";

	return 0;
}
