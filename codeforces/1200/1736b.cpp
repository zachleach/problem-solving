#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                vector<int> A(n);
                for (auto &x: A) {
                        cin >> x;
                }

                bool cond = true;
                for (int i = 1; i < n - 1; i++) {
                        int l = lcm(A[i], A[i - 1]);
                        int r = lcm(A[i], A[i + 1]);
                        if (A[i] != gcd(l, r)) {
                                cond = false;
                        }
                }
                
                cout << (cond ? "YES" : "NO") << endl;
        }
}





































































