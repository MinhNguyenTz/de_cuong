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
    freopen ("bai36.inp", "r", stdin);
    freopen ("bai36.out", "w", stdout);
			
	string s; cin >> s;
	unordered_map <char, ll> track;

	for (auto x: s){
		if (!track.count(x)){
			cout << x; track[x]++;
		}
	}
	return 0;
}
