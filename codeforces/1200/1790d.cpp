#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<int> arr(n);
                map<int, int> counter;

                for (int& x : arr) {
                        cin >> x;
                        counter[x]++;
                }

                int ans = 0;
                for (auto& [i, count] : counter) {
                        ans += max(0, counter[i] - counter[i - 1]);
                }

                cout << ans << endl;
        }
}





































































