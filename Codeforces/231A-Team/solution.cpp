// A. Team
// https://codeforces.com/problemset/problem/231/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    int count = 0;
    while(t--) {
        int p, v, t;
        cin >> p >> v >> t;
        if(p + v + t >= 2) {
            count++;
        }
    }
    cout << count;
    
    return 0;
}
