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

                vec.resize(unique(vec.begin(), vec.end()) - vec.begin());
                n = (int) vec.size();

                int ans = 0;
                for (int i = 0; i < n; i++) {
                        ans += (i == 0 || i == n - 1 || (vec[i-1] > vec[i]) == (vec[i+1] > vec[i]));
                }

                cout << ans << endl;
        }
}





































































