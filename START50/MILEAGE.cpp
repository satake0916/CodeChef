#include <iostream>
using namespace std;

int main() {
	int testcase;
	cin >> testcase;
	for(int o = 0; o < testcase; o++){
	    int n,x,y,a,b;
	    cin  >> n >> x >> y >> a >> b;
	    int t = x * b - y * a;
	    if(t == 0){
	        cout << "ANY" << endl;
	    }else if(t > 0){
	        cout << "DIESEL" << endl;
	    }else{
	        cout << "PETROL" << endl;
	    }
	}
}
