#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int x,y;
        cin >> x >> y;
        int mid = (x+y) / 2;
        cout << max(abs(x-mid), abs(y-mid)) << endl;
    }
}
