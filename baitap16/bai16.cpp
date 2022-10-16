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
    freopen ("bai16.inp", "r", stdin);
    freopen ("bai16.out", "w", stdout);
			
	int n; cin >> n;
//  n >= 2
	if (n == 2){
		cout << "YES";
		return 0;
	}

	for (int i = 2; i*i <= n;){
		if (!(n%i)){
			cout << "NO";
			return 0;
		}
		(i&1)? i += 2: i++;
	}

	cout << "YES";
	return 0;
}
