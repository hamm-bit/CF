#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << 2 << "\n";
        vector<int> v(n, 0);
        for (int j = 1; j <= n; j++) {
            if (!v[j - 1]) {
                int tmp = j;
                for (; tmp <= n; tmp *= 2) {
                    cout << tmp << " ";
                    v[tmp - 1] = 1;
                }
            }   
        }
    }
    return 0;
}