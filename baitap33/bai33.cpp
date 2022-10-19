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
    freopen ("bai33.inp", "r", stdin);
    freopen ("bai33.out", "w", stdout);
			
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++){
		if ('a' <= s[i] && s[i] <= 'z'){
			int j = i - 1;
			ll Nnen = 0, tmp = 1;
			while (!(s[j] >= 'a' && s[j] <= 'z') && j >= 0){
				Nnen = (s[j] - '0') * tmp + Nnen;
				tmp *= 10; j--;
			}
			if (Nnen == 0) Nnen = 1;
			while (Nnen--) cout << s[i];
		}
	}
	return 0;
}
