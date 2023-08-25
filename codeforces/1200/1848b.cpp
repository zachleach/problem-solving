#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

// reference: https://codeforces.com/contest/1848/submission/214051565

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int tt; cin >> tt;
        while (tt--) {
                int n, k; cin >> n >> k;

                vector<int> colors(n);
                for (int i = 0; i < n; i++) {
                        cin >> colors[i];
                        colors[i]--;
                }

                vector<vector<int>> pos(k);
                for (int i = 0; i < n; i++) {
                        int c = colors[i];
                        pos[c].push_back(i);
                }

                int ans = 1e9;
                for (int i = 0; i < k; i++) {
                        vector<int> d;
                        int prev = -1;
                        for (int j : pos[i]) {
                                d.push_back((j - prev) - 1);
                                prev = j;
                        }
                        d.push_back((n - prev) - 1);

                        sort(d.begin(), d.end());
                        d.back() /= 2;
                        ans = min(ans, *max_element(d.begin(), d.end()));
                }

                cout << ans << endl;
        }
}





































































