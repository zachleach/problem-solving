class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> sums(n);

        sums[0] = nums[0];
        for (int i = 1; i < n; i++) {
            sums[i] = nums[i] + sums[i - 1];
        }

        return sums;
    }
};
