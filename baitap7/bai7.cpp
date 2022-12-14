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
    freopen ("bai7.inp", "r", stdin);
    freopen ("bai7.out", "w", stdout);
			
	int m, cnt = 0, tong = 0; cin >> m;
	f0(i, m){
		int a; cin >> a;
		tong += a;
	}

	for (int i = 1; i*i <= tong; i++){
		if (!(tong % i)){
			if (tong/i != sqrt(tong)) cnt += 2;
			else cnt++;
		}
	} 
	cout << cnt;

	return 0;
}
