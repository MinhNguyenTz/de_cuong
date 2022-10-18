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
ll a[maxN];

int main(){
	ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen ("bai25.inp", "r", stdin);
    freopen ("bai25.out", "w", stdout);
			
	int n; cin >> n;
	int middle = (n-1)/2;
	bool is_true = true;

	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i > middle){
			if (!(n & 1)){
				if (a[i] != a[middle]) is_true = false;
				middle--;
			} else{
				middle--;
				if (a[i] != a[middle]) is_true = false;
			}
		}
	}

	if (is_true) cout << "YES";
	else cout << "NO";

	return 0;
}
