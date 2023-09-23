#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, m;
                cin >> n >> m;
                vector<vector<int>> matrix(n, vector<int>(m));
                for (int i = 0; i < n; i++) {
                        string s; cin >> s;
                        for (int j = 0; j < m; j++) {
                                matrix[i][j] = s[j] - '0';
                        }
                }

                vector<pair<int, int>> dirs = {{0, 0}, {0, 1}, {1, 0}, {1, 1}};
                vector<vector<int>> boxes(n - 1, vector<int>(m - 1));
                for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < m - 1; j++) {
                                for (auto [yy, xx]: dirs) {
                                        int y = i + yy;
                                        int x = j + xx;
                                        if (matrix[y][x] == 1) {
                                                boxes[i][j]++;
                                        }
                                }
                        }
                }

                int total = 0;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                if (matrix[i][j] == 1) {
                                        total++;
                                }
                        }
                }

                int fours = 0;
                int threes = 0;
                int lt_three = 0;
                for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < m - 1; j++) {
                                if (boxes[i][j] < 3) {
                                        lt_three++;
                                }
                                if (boxes[i][j] == 3) {
                                        threes++;
                                }
                                if (boxes[i][j] == 4) {
                                        fours++;
                                }
                        }
                }

                if (threes + lt_three == 0) {
                        cout << total - 2 << endl;
                }
                else if (lt_three == 0) {
                        cout << total - 1 << endl;
                }
                else {
                        cout << total << endl;
                }
        }
}





































































