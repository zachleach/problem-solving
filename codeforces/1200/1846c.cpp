#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
	
	int tt; cin >> tt;
        while (tt--) {
                int n, m, h;
                cin >> n >> m >> h;

                vector<vector<int>> times(n, vector<int>(m));
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < m; j++) {
                                cin >> times[i][j];
                        }
                }

                struct contestant {
                        long long i, pts, pen;
                };

                for (auto &vec : times) {
                        sort(vec.begin(), vec.end());
                }

                vector<contestant> contestants(n);

                for (int i = 0; i < n; i++) {
                        contestant c = {};
                        c.i = i;
                        long long cur_time = 0;
                        for (int j = 0; j < m; j++) {
                                if (cur_time + times[i][j] > h) {
                                        break;
                                }
                                cur_time += times[i][j];
                                c.pen += cur_time;
                                c.pts += 1;
                        }
                        contestants[i] = c;
                }

                auto comp_contestant = [](contestant a, contestant b) {
                        if (a.pts != b.pts) {
                                return a.pts > b.pts;
                        }
                        return a.pen > b.pen;
                };

                sort(contestants.begin(), contestants.end(), comp_contestant);

                contestant rud = {};
                for (int i = 0; i < n; i++) {
                        if (contestants[i].i == 0) {
                                rud = contestants[i];
                                break;
                        }
                }

                int before_rud = 0;
                for (int i = 0; i < n; i++) {
                        if (contestants[i].pts > rud.pts) {
                                before_rud++;
                        }
                        else if (contestants[i].pts == rud.pts) {
                                if (contestants[i].pen < rud.pen) {
                                        before_rud++;
                                }
                        }
                        else {
                                break;
                        }
                }

                cout << before_rud + 1 << endl;
        }
}





































































