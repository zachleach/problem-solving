#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<long long> a(n);

                int m = n * (n - 1) / 2;
                vector<long long> b(m);
                for (auto &x: b) {
                        cin >> x;
                }

                sort(b.begin(), b.end());

                int idx = 0;
                for (int i = 0; i < n; i++) {
                        a[i] = b[idx];
                        idx += n - (i + 1);
                }
                a[n - 1] = a[n - 2];

                for (auto& x: a) {
                        cout << x << " ";
                }
                cout << endl;
        }
}





































































