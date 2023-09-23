class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        vector<int> wealths(n);

        for (int i = 0; i < n; i++) {
            for (auto x: accounts[i]) {
                wealths[i] += x;
            }
        }

        return *max_element(wealths.begin(), wealths.end());
    }
};
