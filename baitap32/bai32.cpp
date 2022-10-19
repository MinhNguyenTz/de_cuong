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
    freopen ("bai32.inp", "r", stdin);
    freopen ("bai32.out", "w", stdout);
			
	string s; cin >> s;
	unordered_map <char, ll>  track;
	unordered_map <char, ll>  tmp;

	for (auto &x: s){
		if ('A' <= x && x <= 'Z') x += 32;
		track[x]++;
	}

	for (auto x: s){
		if (!tmp.count(x)){
			if (track[x] > 1)
				cout << track[x] << x;
			else 
				cout << x;
			tmp[x]++;
		}
	}
	return 0;
}
