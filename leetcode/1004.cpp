class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }

    /*
        keep track of the max size of the window

        keep track of the number of 0's in the window
        there can be at most k 0's
        
        iterate through the array:
            // expand
            ele = arr[r++]
            window_size++
            if ele being added to window is 0:
                num_zeros++
            
            // contract if necessary
            while num_zeros > k:
                if arr[l] == 0:
                    num_zeros--
                
                l++
                window_size--;

            update max window size
        
    */
    int slidingWindow(vector<int>& arr, int k) { 
        int n = arr.size();
        int l = 0, r = 0;
        int ans = 0;
        int zero_cnt = 0;
        while (r < n) {
            int ele = arr[r++];
            if (ele == 0) {
                zero_cnt++;
            }

            while (zero_cnt > k) {
                if (arr[l] == 0) {
                    zero_cnt--;
                }
                l++;
            }

            ans = max(ans, r - l);
        }
        
        return ans;
    }
};
