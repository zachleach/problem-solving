class Solution {
public:

    bool improvedImplementation(vector<int>& arr, int n) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                bool l = (i == 0) || (arr[i - 1] == 0);
                bool r = (i == arr.size() - 1) || (arr[i + 1] == 0);

                if (l && r) {
                    arr[i] = 1;
                    ans++;
                }
            }
        }

        return ans;
    }

    bool canPlaceFlowers(vector<int>& arr, int n) {
        if (arr.size() == 1 && arr[0] == 0) {
            n--;
        }

        if (arr.size() > 1 && arr[0] == 0 && arr[1] == 0) {
            arr[0] = 1;
            n--;
        }

        for (int i = 1; i < arr.size() - 1; i++) {
            if (arr[i] == 0) {
                if (arr[i - 1] == 0 && arr[i + 1] == 0) {
                    arr[i] = 1;
                    n--;
                }
            }
        }

        if (arr.size() > 2 && arr[arr.size() - 1] == 0 && arr[arr.size() - 2] == 0) {
            arr[arr.size() - 1] = 1;
            n--;
        }

        return n <= 0;
    }
};
