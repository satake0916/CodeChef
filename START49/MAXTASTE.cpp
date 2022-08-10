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
    cout << max(a,b) + max(c,d) << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
