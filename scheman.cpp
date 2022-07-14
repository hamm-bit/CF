#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int mxN = 2e5 + 5;
int f[mxN];

// CodeForce Educational Round 131 (Div. 2)
// <https://codeforces.com/contest/1701/problem/C>

int main() {
    ios::sync_with_stdio(false);

    int t, n, m, x; ll a, b;
    cin >> t;
    for (;t--;) {
        cin >> m >> n;
		for(int i=1;i<=n;i++) cin >> x, f[x]++;
		int l=1, r=n*2, mid;
		while(l<=r){
            // begin binary search
			mid = l + r>>1; a=b=0;
            // utilize binary search param to compare the
            // expected amount of hours that workers can complete the tasks
            // Using the left boundary as the minimum value
			for(int i=1; i<=m; i++) {
                // compares the amount of hours that is assigned to
                // proficient workers (1 hour) with inefficient hours (2 hours).
                if (mid<=f[i]) a += f[i]-mid;
                else b += (mid-f[i])/2;
            }
            // Adjust boundaries from the time comparison above
			if (a>b) l=mid+1;
			else r=mid-1;
		}
		cout << l << "\n";
		for(int i=1;i<=m;i++)f[i]=0;
    }
    return 0;
}