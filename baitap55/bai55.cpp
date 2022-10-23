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
    freopen ("bai55.inp", "r", stdin);
    freopen ("bai55.out", "w", stdout);
			
	int n; cin >> n;
	bool found = false;
	for (int i = 1 << 30; i > 0; i >>= 1){
		if ((n & i) != 0){
			cout << 1; found = true;
		}
		else if (found) cout << 0;
	}
	return 0;
}
