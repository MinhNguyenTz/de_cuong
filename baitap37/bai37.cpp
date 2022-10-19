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
    freopen ("bai37.inp", "r", stdin);
    freopen ("bai37.out", "w", stdout);
			
	ll k, t; cin >> k >> t;
	string s; cin >> s;
	for (ll i = k - 1; i < k + t - 1 && i < s.size(); i++){
		if ('A' <= s[i] && s[i] <= 'Z') cout << (char)(s[i] + 32);
		else cout << s[i];
	}
// Nếu k + t > s.size() thì chỉ in đến cuối xâu hoặc không in gì cả
	return 0;
}
