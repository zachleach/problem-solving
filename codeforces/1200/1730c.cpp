#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                string str; cin >> str;

                vector<int> arr;
                for (char c: str) {
                        arr.push_back(c - '0');
                }

                int n = arr.size();
                vector<int> visited(n, 0);

                int mn = 10;
                while (true) {
                        int idx = -1;
                        for (int i = n - 1; i > 0; i--) {
                                if (arr[i] < mn) {
                                        mn = arr[i];
                                        idx = i;
                                        break;
                                }
                        }

                        if (idx == -1) {
                                break;
                        }

                        for (int i = 0; i < idx; i++) {
                                if (arr[i] > mn && visited[i] == 0) {
                                        arr[i] = min(9, arr[i] + 1);
                                        visited[i] = 1;
                                }
                        }
                }
                
                sort(arr.begin(), arr.end());
                
                for (int x: arr) {
                        cout << x;
                }
                cout << endl;
        }
}





































































