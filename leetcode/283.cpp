class Solution {
public:
    
    void moveZeroes(vector<int>& nums) {
        twoPointers(nums);
    }

    /*
        utilize 'erase-remove' idiom for removing elements from a container in C++
    */
    void eraseRemove(vector<int>& arr) {
        int zeroCount = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            zeroCount += arr[i] == 0;
        }
        arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());
        for (int i = 0; i < zeroCount; i++) {
            arr.push_back(0);
        }
    }

    /*
        create an temp index variable
        iterating from left to right
            if we find a zero:
                increment the zero counter
            if we find a non-zero, move it to the front:
                set arr[temp] = non-zero element
                temp++

        set the last zero count elements to 0
    */
    void twoPointers(vector<int>& arr) {
        int z_cnt = 0, j = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                z_cnt++;
            }
            else {
                arr[j++] = arr[i];
            }
        }

        for (int i = n - z_cnt; i < n; i++) {
            arr[i] = 0;
        }
    }
};
