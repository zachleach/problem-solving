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

                for (int& x : arr) {
                        cin >> x;
                }

                sort(arr.begin() + 1, arr.end());
                
                if (arr[0] <= arr[1]) {
                        cout << "Bob" << endl;
                }
                else {
                        cout << "Alice" << endl;
                }
        }
}





































































