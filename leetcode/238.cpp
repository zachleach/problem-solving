class Solution {
public:
    /*
        prefix and suffix product helper arrays

        ans[i] = product(all elements left of i) * product(all elements right of i)

        we can construct an array such that arr[i] = product of all elements left of i
        similarly, we can construct an array such that arr[i] = product of all elements right of i

        use these to find the result in O(n) time and O(n) space
    */
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n), right(n);

        left[0] = 1;
        for (int i = 1; i < n; i++) {
            left[i] = left[i - 1] * nums[i - 1];
        }

        right[n - 1] = 1;
        for (int i = n - 2; i > -1; i--) {
            right[i] = right[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            nums[i] = left[i] * right[i];
        }

        return nums;
    }
};
