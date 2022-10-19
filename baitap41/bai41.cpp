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
    freopen ("bai41.inp", "r", stdin);
    freopen ("bai41.out", "w", stdout);
			
	ll m; cin >> m;
	unordered_map <ll,ll> track;
	ll is_one = 0, is_zero = 0;
	f0(i, m){
		cin >> a[i];
		if (a[i] == 1 && !track.count(1)) is_one++;
		else if (a[i] == 0 && !track.count(0)) is_zero++;
		track[a[i] * a[i]]++;
	}
	track[1] -= is_one;
	track[0] -= is_zero;

	ll ans = 0;
	f0(i, m) if (track[a[i]] > 0) ans++;
	cout << ans;
	return 0;
}
