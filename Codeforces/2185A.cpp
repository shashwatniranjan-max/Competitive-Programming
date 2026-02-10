/*
                                A. Perfect Root
time limit per test1 second
memory limit per test256 megabytes
A positive integer x
 is a perfect root if there exists an integer y
 such that y√=x
. For example, 5
 is a perfect root because 25−−√=5
.

For each test case, output n
 distinct perfect roots. Note that the values only need to be distinct within each test case; you can use the same value in different test cases.

Input
The first line of the input contains a single integer t
 (1≤t≤20
) — the number of test cases.

The only line of each test case contains an integer n
 (1≤n≤20
) — the number of perfect roots to output.

Output
For each test case, output n
 distinct perfect roots. Each perfect root x
 must be in the range 1≤x≤109
.

Example
InputCopy
3
1
2
5
OutputCopy
1
2 4
2 102 43 1 21
Note
For the first test case:

1
 is a perfect root because 1–√=1
.
For the second test case:

2
 is a perfect root because 4–√=2
.
4
 is a perfect root because 16−−√=4
.
*/

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