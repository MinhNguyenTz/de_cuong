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

bool xdx (string s){
	if (s.size() == 1) return true;

	int l, r;
	if (s.size() & 1){
		l = (s.size()/2) - 1;
		r = (s.size()/2) + 1;
	}
	else{
		l = (s.size()/2) - 1;
		r = l + 1;
	}

	while (l >= 0 && r < s.size()){
		 if (s[l] != s[r]) return false;
		 l--; r++;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai49.inp", "r", stdin);
    freopen ("bai49.out", "w", stdout);
			
	vector <string> xtm;
	int cnt = 0;

	while (!cin.eof()){
		string s; cin >> s;
		if (s == " ") continue;
		if (xdx(s)){
			xtm.emplace_back(s);
			cnt++;
		}
		s[0] -= 32;
		cout << s << " ";
	}

	el;
	if (!cnt) cout << "khong co";
	else {
		for (auto x: xtm) cout << x << " ";
		cout << cnt;
	}

	return 0;
}
