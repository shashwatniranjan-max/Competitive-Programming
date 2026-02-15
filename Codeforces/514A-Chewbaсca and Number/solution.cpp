#include <iostream>
#include <string>

using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0'; 
        int inverted = 9 - digit;
        if (i == 0) {
            if (inverted < digit && inverted != 0) {
                x[i] = inverted + '0';
            }
        } 
        else {
            if (inverted < digit) {
                x[i] = inverted + '0';
            }
        }
    }

    cout << x << endl;
    return 0;
}