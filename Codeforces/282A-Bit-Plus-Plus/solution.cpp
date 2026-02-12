// A. Bit++
// https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int x = 0;
    string statement;

    for (int i = 0; i < n; ++i) {
        cin >> statement;
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    cout << x << endl;
    return 0;
}
