// A. Blackslex and Password
// https://codeforces.com/problemset/problem/2179/A

#include <iostream>

using namespace std;

void solve() {
    int k, x;
    cin >> k >> x;
    cout << (k * x) + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
