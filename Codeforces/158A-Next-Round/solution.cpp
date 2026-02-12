// A. Next Round
// https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff_score = scores[k - 1];
    int advancing_count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff_score && scores[i] > 0) {
            advancing_count++;
        }
    }

    cout << advancing_count << endl;

    return 0;
}
