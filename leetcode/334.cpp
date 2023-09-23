/*
    find if there exists 3 elements in the array that, when 
    ordered from left to right, increase by value
    
*/
class Solution {
public:
    bool solve(vector<int>& arr) {
        long long a = 10e9;
        long long b = 10e9;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] <= a) {
                a = arr[i];
            }
            else if (arr[i] <= b) {
                b = arr[i];
            }
            else if (arr[i] > b && b > a){
                return true;
            }
        }
        return false;
    }

    bool increasingTriplet(vector<int>& nums) {
        return solve(nums);
    }
};
