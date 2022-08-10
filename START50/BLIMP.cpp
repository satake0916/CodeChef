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

int main(){
	int T;
	cin >> T;
	while(T--){
		int n,x,y;
		cin >> n >> x >> y;
		vector<int> a(n);
		for(int i = 0; i < n; i++) cin >> a[i];

		if(x <= y){
			int mx = *max_element(a.begin(), a.end());
			cout << (mx + y - 1) / y << endl;
			continue;
		}

		int cnt = 0;
		for(int i = n-1; i >= 0; i--){
			int rest = a[i] - cnt * y;
			if(rest <= 0) continue;
			int needed = (rest + x - 1) / x;
			cnt += needed;
		}
		cout << cnt << endl;
	}
}
