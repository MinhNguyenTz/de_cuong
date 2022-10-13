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
    freopen ("bai12.inp", "r", stdin);
    freopen ("bai12.out", "w", stdout);
			
	unordered_map <int,ll> track;
	int n; cin >> n;
	while (n--){
		int a; cin >> a;
		track[a]++;
	}

	ll m, cur_m = LONG_LONG_MIN;
	for (auto x: track){
		if (x.se > cur_m){
			cur_m = x.se;
			m = x.ft;
		}
	}

	cout << m;
	return 0;
}
