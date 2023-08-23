#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                string s; cin >> s;

                int ans = n - 1;
                for (int i = 0; i < n - 2; i++) {
                        if (s[i] == s[i + 2]) {
                                ans--;
                        }
                }

                cout << ans << endl;
        }
}





































































