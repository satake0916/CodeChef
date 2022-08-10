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

#ifdef LOCAL
#define dbg(x) cerr << __LINE__ << " : " << #x << " = " << (x) << endl
#else
#define dbg(x) true
#endif

int main(){
	int testcase;
	cin >> testcase;
	for(int o = 0; o < testcase; o++){
	    int n,x;
	    cin >> n >> x;
		if(x < n){
			cout << -1 << endl;
		}else{
			cout << x - n + 1 << " ";
			for(int i = 1; i <= n; i++){
				if(i != x-n+1) cout << i << " ";
			}
			cout << endl;
		}
	}
}
