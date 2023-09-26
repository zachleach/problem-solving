#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);

	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<int> a(n);
                for (int i = 0; i < n; i++) {
                        a[i] = n - 1 - i;
                }

                vector<int> ans(n);

                int i = 0;
                while (i < n) {
                        int max_sqrt = std::sqrt(2 * a[i]);
                        int max_sq = max_sqrt * max_sqrt;
                        int end_val = max_sq - a[i];
                        while (i < n && a[i] >= end_val) {
                                ans[i] = max_sq - a[i];
                                i++;
                        }
                }

                reverse(ans.begin(), ans.end());
                for (int x: ans) {
                        cout << x << " ";
                }
                cout << endl;
        }
}





































































