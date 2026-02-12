// A. Way Too Long Words
// https://codeforces.com/problemset/problem/71/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        string str; cin >> str;
        if(str.length() <= 10) cout << str << endl;
        else {
            cout << str[0] << str.length()-2 << str[str.length()-1] << endl;
        }
    }
    return 0;
}
