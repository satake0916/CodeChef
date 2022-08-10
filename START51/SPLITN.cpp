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
    int cnt = 0;
    for(int i = 0; i < 32; i++){
        if((1 << i) & n) cnt++;
    }
    cout << cnt-1 << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
