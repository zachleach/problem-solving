#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, k;
                cin >> n >> k;

                vector<long long> s(n + 1);
                for (int i = n - k + 1; i < n + 1; i++) {
                        cin >> s[i];
                }

                if (k == 1) {
                        cout << "YES" << endl;
                        continue;
                }

                vector<long long> a(n + 1);
                for (int i = n - k + 2; i < n + 1; i++) {
                        a[i] = s[i] - s[i - 1];
                }

                if (!is_sorted(a.begin() + n - k + 2, a.end())) {
                        cout << "NO" << endl;
                        continue;
                }

                if ((n - k + 1) * a[n - k + 2] < s[n - k + 1]) {
                        cout << "NO" << endl;
                        continue;
                }

                cout << "YES" << endl;
        }
}





































































