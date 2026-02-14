#include <iostream>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int remainder = n % 3;
    
    if (remainder == 0) {
        cout << 0 << endl;
    } else {
        cout << 3 - remainder << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}