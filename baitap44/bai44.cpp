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
    freopen ("bai44.inp", "r", stdin);
    freopen ("bai44.out", "w", stdout);
			
	string s, t; cin >> s >> t;
	for (auto &x : s) if ('A' <= x && x <= 'Z') x += 32;
	for (auto &x : t) if ('A' <= x && x <= 'Z') x += 32;
	
	if (s.size() < t.size()) cout << s << t;
	else cout << t << s;
	return 0;
}
