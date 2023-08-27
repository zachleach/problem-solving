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

                for(int& x : arr) {
                        cin >> x;
                }

                int mn = 1, mx = n;
                int l = 0, r = n - 1;
                while (l != r) {
                        if (arr[r] == mn) {
                                r--;
                                mn++;
                        }
                        else if (arr[r] == mx) {
                                r--;
                                mx--;
                        }
                        else if (arr[l] == mn) {
                                l++;
                                mn++;
                        }
                        else if (arr[l] == mx) {
                                l++;
                                mx--;
                        }
                        else {
                                break;
                        }
                }

                if (l == r) {
                        cout << -1 << endl;
                }
                else {
                        cout << l + 1 << " " << r + 1 << endl;
                }
        }
}





































































