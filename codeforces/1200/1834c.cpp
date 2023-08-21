#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                string s, t;
                cin >> s; cin >> t;
                string s_rev = s;
                reverse(s_rev.begin(), s_rev.end());

                int diff_s = 0;
                int diff_rev_s = 0;

                for (int i = 0; i < n; i++) {
                        if (s[i] != t[i]) {
                                diff_s++;
                        }
                        if (s_rev[i] != t[i]) {
                                diff_rev_s++;
                        }
                }

                int ans = (2 * diff_s) - (diff_s % 2);
                int rev_ans = (2 * diff_rev_s) - (1 - diff_rev_s % 2);

                if (diff_s == 0) {
                        cout << 0 << endl;
                        continue;
                }
                if (diff_rev_s == 0) {
                        cout << 2 << endl;
                        continue;
                }

                cout << min(ans, rev_ans) << endl;
        }
}





































































