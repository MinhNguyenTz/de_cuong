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
    freopen ("bai47.inp", "r", stdin);
    freopen ("bai47.out", "w", stdout);
			
	int n; cin >> n;
	double mi_x, ma_x, mi_y, ma_y;
	mi_x = mi_y = INT_MAX;
	ma_x = ma_y = INT_MIN;

	while (n--){
		double x, y; cin >> x >> y;

		if (mi_x > x) mi_x = x;
		if (ma_x < x) ma_x = x;
		if (mi_y > y) mi_y = y;
		if (ma_y < y) ma_y = y;
	}

	double chieu_dai = ma_y - mi_y, chieu_rong = ma_x - mi_x;
	double S = round((chieu_dai*chieu_rong) * 10000.0)/10000.0;
	stringstream Ss;
	Ss << S;

	string ans;
	Ss >> ans;

	int c = 0, cnt = 0;
	for(auto x: ans){
		if (c) cnt++;
		if (x == '.') c++;
		cout << x;
	}
	if (!c) cout << '.';
	while (cnt < 4){
		cout << '0';
		cnt++;
	}
	return 0;
}
