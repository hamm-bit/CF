#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mxN = 5e5+5;
int t, n, p, b, ans[mxN];

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> t;
    vector<pair<int, int>> m[mxN];
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> v;
    for (;t--;) {
        cin >> n;
        for (int i=1; i<n; i++) m[i].clear();
        for (p=1; p<=n; p++) {
            cin >> b;
            if (b == 0) m[p + 1].emplace_back(n, p);
            else m[p/(b+1) + 1].emplace_back(n, p);
        }
        for (int i = 1; i <= n; i++) {
            for (pair<int, int>j : m[i]) v.push(j);
            pair<int, int>x = v.top(); v.pop();
            ans[x.second] = i;
        }
        for (int i=1; i<= n; i++) cout << ans[i] << " ";
        cout << "\n";
    } return 0;
}