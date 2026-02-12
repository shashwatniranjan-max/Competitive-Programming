// A. Perfect Root
// https://codeforces.com/problemset/problem/2185/A

#include <iostream>

using namespace std;

void solve() {
    int n;
    if (!(cin >> n)) return;
    for (int i = 1; i <= n; ++i) {
        cout << i << (i == n ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
