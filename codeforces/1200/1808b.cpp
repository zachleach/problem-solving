#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, m;
                cin >> n; cin >> m;

                // read each column as an array
                vector vec(m, vector<int>(n));
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> vec[j][i];
                        }
                }

                long long ans = 0;
                for (int i = 0; i < m; i++) {
                        sort(vec[i].begin(), vec[i].end());
                        long long sum = 0;
                        for (int j = 0; j < n; j++) {
                                ans += (1ll * j * vec[i][j]) - sum;
                                sum += vec[i][j];
                        }
                }

                cout << ans << endl;
        }
}





































































