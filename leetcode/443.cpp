class Solution {
public:
    int compress(vector<char>& chars) {
        vector<string> nums;
        vector<char> letters;

        char cur = chars[0];
        int count = 0;
        for (int i = 0; i < chars.size(); i++) {
            if (chars[i] != cur) {
                letters.push_back(cur);
                nums.push_back(std::to_string(count));
                count = 0;
            }
            cur = chars[i];
            count++;
        }
        letters.push_back(cur);
        nums.push_back(std::to_string(count));

        chars.clear();
        for (int i = 0; i < nums.size(); i++) {
            chars.push_back(letters[i]);
            if (nums[i] != "1") {
                for (char ch: nums[i]) {
                    chars.push_back(ch);
                }
            }
        }

        return chars.size();
    }
};
