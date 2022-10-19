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
    freopen ("bai45.inp", "r", stdin);
    freopen ("bai45.out", "w", stdout);
			
	string a, b; cin >> a >> b;
	ll tonga = 0, tongb = 0;
	for (auto x: a) if ('0' <= x && x <= '9') tonga += (x - '0');
	for (auto x: b) if ('0' <= x && x <= '9') tongb += (x - '0');

	cout << max(tonga, tongb);
	return 0;
}
