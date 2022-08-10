#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
#include<bitset>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<utility>
#include<cassert>
#include<complex>
#include<numeric>
#include<array>
#include<chrono>
using namespace std;
using ll = long long;

#define pb push_back
#define eb emplace_back
#define fi first
#define se second

void solve(){
	int n;
	cin >> n;
	vector<ll> a(n);
	for (auto &x : a) cin >> x;
	const int K = 2;
	const ll INF = numeric_limits<ll>::max();
	vector dp(n, vector(2*K+1, INF));
	for (int i = -K; i <= K; ++i){
		dp[0][K+i] = 1LL << abs(i);
	}
	for (int i = 1; i < n; ++i) {
		for (int j = -K; j <= K; ++j) {
			for (int jj = -K; jj <= K; ++jj) {
				ll x = a[i] + j, y = a[i-1] + jj;
				if (gcd(x, y) > 1) continue;
				if (dp[i-1][jj+K] == INF) continue;
				dp[i][j+K] = min(dp[i][j+K], dp[i-1][jj+K] + (1LL << abs(j)));
			}
		}
	}
	ll ans = INF;
	for (int i = 0; i <= 2*K; ++i) ans = min(ans, dp[n-1][i]);
	cout << ans << endl;
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
	int T; cin >> T;
	while(T--) solve();
	return 0;
}
