#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<int> x(n), y(n);
                for (int i = 0; i < n; i++) {
                        cin >> x[i];
                }
                for (int i = 0; i < n; i++) {
                        cin >> y[i];
                }

                vector<int> d(n);
                for (int i = 0; i < n; i++) {
                        d[i] = y[i] - x[i];
                }

                vector<int> neg, pos;
                for (int i = 0; i < n; i++) {
                        if (d[i] < 0) {
                                neg.push_back(d[i]);
                        }
                        else {
                                pos.push_back(d[i]);
                        }
                }

                sort(neg.begin(), neg.end());
                sort(pos.begin(), pos.end());
                reverse(pos.begin(), pos.end());

                int ans = 0;
                int j = 0, i = 0;
                while (j < (int) neg.size() && i < (int) pos.size()) {
                        if (abs(neg[j]) <= pos[i]) {
                                ans++;
                                i++, j++;
                        }
                        else {
                                j++;
                        }
                }

                ans += ((int) pos.size() - ans) / 2;
                cout << ans << endl;
        }
}





































































