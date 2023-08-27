#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int a1, a2, a3, a4;
                cin >> a1 >> a2 >> a3 >> a4;

                if (a1 == 0) {
                        if (a2 || a3 || a4) {
                                cout << 1 << endl;
                                continue;
                        }

                        cout << -1 << endl;
                        continue;
                }

                int ans = 0;
                ans += a1;
                ans += 2 * min(a2, a3);
                ans += min(a1 + 1, abs(a2 - a3) + a4);

                cout << ans << endl;
        }
}





































































