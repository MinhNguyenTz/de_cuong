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
string s;
const int N = 1e3 + 1;
bool isPalindrom[N][N];


void find(){
	char cur = s[1], len = 1;

	for (int i = 1; i < s.size(); i++){

		if (s[i] == cur && i != 1) len++;
		else len = 1, cur = s[i];

		int l = i - len, r = i + 1;
		while (l >= 0 && r < s.size() && s[l] == s[r]){
			isPalindrom[l][r] = true;
			l--; r++;
		}
	}
}

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai53.inp", "r", stdin);
    freopen ("bai53.out", "w", stdout);
			
	cin >> s;
	find();
	int k; cin >> k;
	while (k--){
		int l, r; cin >> l >> r;
		l--; r--;
		if (l + 1 == r) cout << "yes\n";
		else if (isPalindrom[l][r] == true) cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}
