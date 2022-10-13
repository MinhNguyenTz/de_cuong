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
	#define LL_MAX LONG_LONG_MAX
	#define LL_MIN LONG_LONG_MIN
}

const int maxN = 1e5 + 7;

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai46.inp", "r", stdin);
    freopen ("bai46.out", "w", stdout);
			
	string s; cin >> s;
	ll m = LL_MIN;
	char cur_max;
	map <char,ll> track;

	for (auto &x: s){
		if ('a' <= x && x <= 'z') x -= 32;
		track[x]++;
		if (m < track[x]){
			m = track[x];
			cur_max = x;
		} else if (m == track[x]){
			if (x < cur_max) cur_max = x;
		}
	}
	cout << track.size();
	for (auto x: track){
		cout << x.ft << x.se;
	}
	cout << cur_max;
	return 0;
}
