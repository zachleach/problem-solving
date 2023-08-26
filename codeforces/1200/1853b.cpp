#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, k; cin >> n >> k;
                int ans = 0;

                for (int i = 0; i < n/2 + 1; i++) {
                        int fx = n;
                        int f = fx - i;
                        int s = fx - f;

                        bool cond = true;
                        for (int j = 0; j < k-3; j++) {
                                fx = f;
                                f = s;
                                s = fx - f;

                                cond &= f >= s;
                                cond &= min(f, s) >= 0;
                                if (!cond) {
                                        break;
                                }
                        }
                        if (cond) {
                                ans++;
                        }
                }

                cout << ans << endl;
        }
}





































































