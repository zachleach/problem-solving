class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingWindow(nums, k);
    }

    /*
        average is sum(elements in the window) / k

        keep track of the sum of the window
        each iteration:
            subtract the leftmost value in the window
            add the value to the right of the window into the window
            update the max average

    */
    double slidingWindow(vector<int>& arr, int k) {
        int n = arr.size();
        double cur_total = 0;
        for (int i = 0; i < k; i++) {
            cur_total += arr[i];
        }
        double max_avg = cur_total / k;
        for (int i = 0; i < n - k; i++) {
            cur_total -= arr[i];
            cur_total += arr[i + k];
            max_avg = max(max_avg, cur_total / k);
        }

        return max_avg;
    }
};
