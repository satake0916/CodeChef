#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

void solve(){
    ll n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    
    int b = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') b++;
    if(b == 0){
        cout << n * m << endl;
        return;
    }
    
    if(m%2 == 0){
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') break;
            else cnt++;
        }
        for(int i = n-1; i >= 0; i--){
            if(s[i] == '1') break;
            else cnt++;
        }
        cout << cnt+1 << endl;
    }else{
        int cnt = 0;
        if(b%2 == 1){
            cout << 0 << endl;
        }else{
            int t = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == '1') t++;
                if(t == b / 2) cnt++;
            }
            cout << cnt << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0;
}
