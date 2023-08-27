#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;

                vector<int> ans_vec;
                int ans = -1;
                for (int k = 0; k < n; k++) {
                        vector<int> a(n);
                        for (int i = 0; i < k; i++) {
                                a[i] = i + 1;
                        }
                        for (int i = 0; i < n - k; i++) {
                                a[i + k] = n - i;
                        }

                        int total = 0;
                        for (int i = 0; i < n; i++) {
                                total += a[i] * (i + 1);
                        }

                        int mx = -1;
                        for (int i = 0; i < n; i++) {
                                mx = max(mx, a[i] * (i + 1));
                        }
                        total -= mx;

                        ans = max(ans, total);
                }

                cout << ans << endl;
        }
}





































































