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

pair<ll, ll> sol(ll x){
	ll l,r;
	for(ll i = 1; i*i <= x; i++){
		if(x % i == 0){
			l = i;
			r = x/i;
		}
	}
	return make_pair(l, r);
}

void pp(pair<ll, ll> p){
	cout << p.first << " " << p.second << endl;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		ll x,y;
		cin >> x >> y;
		pair<ll, ll> wa = make_pair(x/2, x - x/2);
		pair<ll, ll> seki = sol(y);
		if(wa.second < seki.first || seki.second < wa.first){
			pp(wa);
			pp(seki);
		}else{
			cout << -1 << endl;
		}
	}
}
