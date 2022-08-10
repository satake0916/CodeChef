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
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 3){
			cout << "1 2 3" << endl;
		}else{
			cout << n << " " << n-2 << " ";
			for(int i = 1; i <= n-4; i++) cout << i << " ";
			cout << n-3 << " " << n-1 << endl;
		}
	}
}
