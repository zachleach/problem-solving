class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> ran_counter, mag_counter;
        for (char ch: magazine) {
            mag_counter[ch]++;
        }
        for (char ch: ransomNote) {
            ran_counter[ch]++;
        }

        bool ans = true;
        for (auto [ch, ran_count]: ran_counter) {
            if (mag_counter[ch] < ran_count) {
                ans = false;
            }
        }

        return ans;
    }
};
