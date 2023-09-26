class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> counter;
        for (int ele: arr) {
            counter[ele]++;
        }

        set<int> values, counts;
        for (auto [x, cnt]: counter) {
            values.insert(x);
            counts.insert(cnt);
        }

        return values.size() == counts.size();
    }
};
