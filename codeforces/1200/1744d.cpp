#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int twos(int x) {
        int ret = 0;
        while (x % 2 == 0) {
                x /= 2;
                ret++;
        }

        return ret;
}

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;
                int cnt = 0;
                for (int i = 0; i < n; i++) {
                        int x; cin >> x;
                        cnt += twos(x);
                }

                if (cnt >= n) {
                        cout << 0 << endl;
                        continue;
                }

                vector<int> vec;
                for (int i = 1; i < n + 1; i++) {
                        vec.push_back(twos(i));
                }

                sort(vec.rbegin(), vec.rend());

                int op = -1;
                for (int i = 0; i < n; i++) {
                        cnt += vec[i];
                        if (cnt >= n) {
                                op = i + 1;
                                break;
                        }
                }

                cout << op << endl;
        }
}





































































