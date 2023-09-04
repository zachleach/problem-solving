#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n; cin >> n;

                string s(n + 1, '1');
                string t; cin >> t;
                t = '1' + t;

                int counter = 0;
                for (int i = 1; i < n + 1; i++) {
                        // if i not in t
                        if (t[i] == '0') {
                                // remove all possible multiples of i
                                int j = 1;
                                while (i * j < n + 1 && t[i * j] == '0') {
                                        // if can remove s_i
                                        if (s[i * j] == '1') {
                                                counter += i;
                                                s[i * j] = '0';
                                        }
                                        j++;
                                }
                        }

                        if (s == t) {
                                break;
                        }
                }

                cout << counter << endl;

        }
}





































































