#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t, x1, x2, x3, x4;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x1 >> x2 >> x3 >> x4;
        if (!x1 && !x2 && !x3 && !x4) {
            cout << "0\n";
        } else if (x1 && x2 && x3 && x4) {
            cout << "2\n";
        } else {
            cout << "1\n";
        }
    }
    return 0;
}