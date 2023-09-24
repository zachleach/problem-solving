class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        return slidingWindow(nums);
    }

    /*
        note that there can be at most 1 zero in the window
        define a window as a left and right index that move through the array from left to right

        keep track of the max window size seen so far

        iterate through array:
            expand the window to the right one
            if you add a zero:
                while zero_count == 2:
                    if element to be removed is a zero:
                        decrement zero count

                    decrease window by incrementing left index
            
            update the max window size seen so far

        return the size of the window minus the one element removed

    */
    int slidingWindow(vector<int>& arr) {
        int n = arr.size();
        int l = 0, r = 0;
        int ans = -n;
        int zero_cnt = 0;
        while (r < n) {
            int ele = arr[r++];
            if (ele == 0) {
                zero_cnt++;
                while (zero_cnt > 1) {
                    int ele = arr[l++];
                    if (ele == 0) {
                        zero_cnt--;
                    }
                }
            }

            ans = max(ans, r - l);
        }

        return ans - 1;
    }
};
