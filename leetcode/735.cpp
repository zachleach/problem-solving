class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        int n = arr.size();
        vector<int> s;

        for (int i = 0; i < n; i++) {
            /* if no collision */
            if (s.empty() || s.back() < 0 || arr[i] > 0) {
                // add to stack
                s.push_back(arr[i]);
                continue;
            }

            /* handle collisions */
            while (!s.empty() and s.back() > 0) {
                int pos = s.back();
                int neg = arr[i];
                // destroy negative
                if (abs(pos) > abs(neg)) {
                    // don't re-enter for loop
                    i = i + 1; 
                    break;
                }
                // destroy both
                else if (abs(pos) == abs(neg)) {
                    s.pop_back(); 
                    // don't re-enter for loop
                    i = i + 1;
                    break;
                }
                // destroy positive, repeat loop
                else if (abs(pos) < abs(neg)) {
                    s.pop_back();
                }
            }

            /* re-enter for-loop on same element for insertion */
            i = i - 1;
        }

        return s;
    }
};
