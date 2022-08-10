#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(auto &i: a) cin >> i;
    vector<vector<ll>> dp(n, vector<ll>(2, 0));
    for(int i = 1; i < n; i++){
        dp[i][0] = max(dp[i-1][0] + (a[i-1] ^ a[i]), dp[i-1][1] + ((a[i-1]+x) ^ a[i]));
        dp[i][1] = max(dp[i-1][0] + (a[i-1] ^ (a[i]+x)), dp[i-1][1] + ((a[i-1]+x) ^ (a[i]+x)));
    }
    cout << max(dp[n-1][0], dp[n-1][1]) << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
