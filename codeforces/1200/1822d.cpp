#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;

                if (n == 1) {
                        cout << 1 << endl;
                        continue;
                }

                if (n % 2) {
                        cout << -1 << endl;
                        continue;
                }

                for (int i = 0; i < n; i++) {
                        if (i % 2) {
                                cout << i;
                        }
                        else {
                                cout << n - i;
                        }
                        cout << " ";
                }
                cout << endl;
        }
}





































































