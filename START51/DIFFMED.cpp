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
    int s = 1, t = n;
    while(s < t){
        cout << t << " " << s << " ";
        s++, t--;
        if(s == t) cout << s;
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
