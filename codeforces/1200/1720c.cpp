#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, m; cin >> n >> m;

                vector<pair<int, int>> dirs;
                dirs.push_back({0, 0});
                dirs.push_back({0, 1});
                dirs.push_back({1, 0});
                dirs.push_back({1, 1});

                vector<vector<int>> matrix(n, vector<int>(m));
                for (auto& row: matrix) {
                        string s; cin >> s;
                        for (int i = 0; i < (int) s.length(); i++) {
                                row[i] = s[i] - '0';
                        }
                }

                vector<vector<int>> squares(n - 1, vector<int>(m - 1, 0));

                for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < m - 1; j++) {
                                for (auto& [yy, xx]: dirs) {
                                        int y = i + yy;
                                        int x = j + xx;

                                        if (matrix[y][x] == 1) {
                                                squares[i][j]++;
                                        }
                                }
                        }
                }

                for (auto& row: squares) {
                        for (auto& x: row) {
                                cout << x << " ";
                        }
                        cout << endl;
                }



        }
}





































































