class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        return hashmap(nums, k);
    }

    /*
        derivative problem of two sum

    */
    int hashmap(vector<int>& arr, int k) {
        map<int, int> cntr;
        int n = arr.size();
        for (int& x: arr) {
            cntr[x]++;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            // if k - num is num
            if (arr[i] == k - arr[i]) {
                if (cntr[arr[i]] > 1) {
                    ans++;
                    cntr[arr[i]] -= 2;
                }
            }
            else {
                if (cntr[arr[i]] > 0 && cntr[k - arr[i]] > 0) {
                    ans++;
                    cntr[arr[i]]--;
                    cntr[k - arr[i]]--;
                }
            }
        }

        return ans;
    }

    /*
        sort the array (order doesn't matter)

        two converging pointers
        increment counter if the two elements add to k
        
    */
    int twoPointers(vector<int>& arr, int k) {
        return 0;
    }
};
