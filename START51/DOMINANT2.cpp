#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        mp[a]++;
    }
    
    int mx = -1;
    for(auto p: mp) mx = max(mx, p.second);
    int cnt = 0;
    for(auto p: mp) if(p.second == mx) cnt++;
    cout << (cnt > 1 ? "NO" : "YES") << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
