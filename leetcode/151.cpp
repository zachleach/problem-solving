class Solution {
public:
    string reverseWords(string s) {
        std::istringstream ss(s);
        string word;

        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }

        reverse(words.begin(), words.end());

        string ans = "";
        for (string word: words) {
            ans += word;
            ans += " ";
        }

        return ans.substr(0, ans.size() - 1);
    }
};
