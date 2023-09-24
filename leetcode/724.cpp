class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        return prefixSum(nums);
    }

    /*
        calculate the prefix sum array from left to right
        calculate the prefix sum array from right to left

        iterate though the indices from left to right:
            if left_sums[i] == right_sums[i]:
                return i
        
        return -1

    */
    int prefixSum(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n, 0);
        vector<int> right(n, 0);

        for (int i = 0; i < n - 1; i++) {
            left[i + 1] = left[i] + arr[i];
            right[i + 1] = right[i] + arr[n - 1 - i];
        }
        reverse(right.begin(), right.end());

        for (int i = 0; i < n; i++) {
            if (left[i] == right[i]) {
                return i;
            }
        }
        
        return -1;
    }
};
