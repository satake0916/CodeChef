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
    string s,r;
    cin >> s >> r;
    int cnt = 0;
    for(int i = 0; i < n; i++) if(s[i] != r[i]) cnt++;
    cout << (cnt+1)%2 << endl;
}

int main() {
    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}
