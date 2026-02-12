// A. Bear and Big Brother
// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>
using namespace std;

int years(int a, int b) {
    int count = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        count++;
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << years(a, b);
    return 0;
}
