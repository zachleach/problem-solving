class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        return solve(nums1, nums2);
    }

    /*
        return a 2d array such that
        arr[0] = array of all distinct integers in arr1 not in arr2
        arr[1] = array of all distinct integers in arr2 not in arr1

        set(arr1)
        set(arr2)

        for ele in set1:
            if ele not in set2:
                result[0].append(ele)
        
        for ele in set2:
            if ele not in set1:
                result[1].append(ele)

    */
    vector<vector<int>> solve(vector<int>& arr1, vector<int>& arr2) {
        vector<vector<int>> result(2);

        set<int> set1(arr1.begin(), arr1.end());
        set<int> set2(arr2.begin(), arr2.end());

        for (int ele: set1) {
            if (!set2.contains(ele)) {
                result[0].push_back(ele);
            }
        }

        for (int ele: set2) {
            if (!set1.contains(ele)) {
                result[1].push_back(ele);
            }
        }

        return result;
    }

};
