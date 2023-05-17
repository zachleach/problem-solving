#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
        int T; 
        cin >> T;
        while (T--) {
                int n, m;
                cin >> n >> m;

                vector<int> vec(n);
                for (int &x : vec) {
                        cin >> x;
                }

                sort(vec.begin(), vec.end());

                // for each parabola
                while (m--) {
                        long long a, b, c;
                        cin >> a >> b >> c;

                        auto it = lower_bound(vec.begin(), vec.end(), b);

                        auto lambda = [](int a, int b, int c) {
                                return 1LL * b * b < 4LL * a * c;
                        };

                        // least value greater or equal to b
                        if (it != vec.end() && lambda(a, b-*it, c)) {
                                cout << "YES" << endl;
                                cout << *it << endl;
                        }
                        // greatest value less than b
                        else if (it != vec.begin() && lambda(a, b-*prev(it), c)) {
                                cout << "YES" << endl;
                                cout << *prev(it) << endl;
                        }
                        else {
                                cout << "NO" << endl;
                        }

                }


        }

}





































































