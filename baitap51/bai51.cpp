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

const int maxN = 1e6;

bool isCPDB (int x){
	int cnt = 2;
	for (int i = 2; i*i <= x; i++){
		if (x % i == 0){
			if (i*i == x) cnt++;
			else cnt += 2;
		}
		if (cnt > 9) return false;
	}
	return cnt == 9;
}

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai51.inp", "r", stdin);
    freopen ("bai51.out", "w", stdout);
			
	int a, b; cin >> a >> b;
	int cnt = 0;
	for (int i = a; i <= b; i++) if (i % 3 == 0 && floor(sqrt(i)) == ceil(sqrt(i)) && isCPDB(i)) cnt++;
	cout << cnt;
	return 0;
}
