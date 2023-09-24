class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        return prefixSum(gain);
    }

    int prefixSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> sums(n + 1, 0);
        for (int i = 0; i < n; i++) {
            sums[i + 1] = sums[i] + arr[i];
        }
        
        return *max_element(sums.begin(), sums.end());
    }
};
