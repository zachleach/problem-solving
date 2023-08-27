#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.precision(10); 
        cout.setf(ios::fixed);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, b, h;
                cin >> n >> b >> h;

                vector<int> y(n);
                for (int &x : y) {
                        cin >> x;
                }

                long double area = (long double) b * h / 2.0;

                for (int i = 0; i < n - 1; i++) {
                        long double b2 = 0;
                        int ht = min(h, y[i + 1] - y[i]);
                        if (ht < h) {
                                b2 = (long double) b * (h - ht) / h;
                        }

                        area += (b + b2) * ht / 2.0;
                }

                cout << area << endl;
        }
}





































































