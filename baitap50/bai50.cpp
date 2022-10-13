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
ll a[3][maxN];
bool path[maxN];

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai50.inp", "r", stdin);
    freopen ("bai50.out", "w", stdout);

	int n; cin >> n;
	f0(j, 3) f0(i, n) cin >> a[j][i];
	fill_n(path,n + 1, false);
	
	int c = 1, cnt = 0;
	ll prev_l = a[0][0], prev_w = a[1][0], prev_h = a[2][0];
	while (c){
		c = 0;
		int pos = 0;
		for (int i = 0; i< n; i++){
			if (!path[i]){
				c = 1;
				prev_l = a[0][i], prev_w = a[1][i], prev_h = a[2][i];
				path[i] = true;
				pos = i + 1;
				break;
			}
		}

		for (int i = pos; i < n; i++){
			if (path[i]) continue;

			ll l = a[0][i], w = a[1][i], h = a[2][i];

			if (l >= prev_l && w >= prev_w && h >= prev_h){
				path[i] = true;
				prev_l = l; prev_w = w; prev_h = h;
			}
		}
		if (c)cnt++;
	}

	cout << cnt;
	return 0;
}
