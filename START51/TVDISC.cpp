#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

void solve(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int f = (a-c) - (b-d);
    if(f > 0) cout << "Second" << endl;
    else if(f == 0) cout << "Any" << endl;
    else cout << "First" << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
