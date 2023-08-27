#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<int> a(n);

                for (int& x : a) {
                        cin >> x;
                }

                if (*min_element(a.begin(), a.end()) == 1) {
                        if (*max_element(a.begin(), a.end()) == 1) {
                                cout << 0 << endl;
                                continue;
                        }
                        else {
                                cout << -1 << endl;
                                continue;
                        }
                }

                vector<pair<int, int>> ops;
                while (*min_element(a.begin(), a.end()) != *max_element(a.begin(), a.end())) {
                        int i = min_element(a.begin(), a.end()) - a.begin();
                        int j = max_element(a.begin(), a.end()) - a.begin();
                        a[j] = (a[j] + a[i] - 1) / a[i];
                        ops.push_back({j + 1, i + 1});
                }
                
                cout << ops.size() << endl;
                for (auto& [i, j] : ops) {
                        cout << i << " " << j << endl;
                }
        }
}





































































