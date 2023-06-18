#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int T; cin >> T;
        while (T--) {
                int n; cin >> n;
                vector<int> vec(n);
                for (auto &x : vec) cin >> x;

                int flag = 0;
                for (int x = 0; x < n; x++) {
                        int ans = 0;
                        for (int i = 0; i < n; i++) {
                                if (vec[i] > x) ans++;
                        }
                        if (ans == x) {
                                cout << ans << endl;
                                flag = 1;
                                break;
                        }
                }
                if (flag) {
                        continue;
                }

                cout << "-1" << endl;
        }
}





































































