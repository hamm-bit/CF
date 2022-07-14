#include <bits/stdc++.h>
using namespace std;
using LL = long long;

// CodeForce Educational Round 131 (Div. 2)
// <https://codeforces.com/problemset/problem/1701/E>

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    for (cin >> t; t; t -= 1) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        vector f(n + 1, vector<int>(m + 1));
        // DP to find a substring from the beginning of s
        // that matches the same substring of t from the beginning
        // (Equivalent of "HOME" button)
        for (int i = n - 1; i >= 0; i -= 1)
            for (int j = m - 1; j >= 0; j -= 1)
                if (s[i] == t[j]) f[i][j] = f[i + 1][j + 1] + 1;
        int ans = n - f[0][0], p = 0;
        // DP to find all possible backspace to be applied
        // traversing from the front of the string to the end
        // for each case of traversal, compare the result to
        // the HOME result, find min()
        for (int i = 0; i < n; i += 1) {
            if (p < m and t[p] == s[i]) p += 1;
            for (int j = -1; j < p; j += 1) {
                int pans = n - f[i + 1][j + 1] + i - j + 1;
                ans = min(ans, pans);
            }
        }
        if (p == m) cout << ans << "\n";
        else cout << "-1\n";
    }
}