class Solution {
public:
    string reverseVowels(string s) {
        set<char> v = { 'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U' };
        string vowels = "";

        for (char ch: s) {
            if (v.contains(ch)) {
                vowels += ch;
            }
        }

        reverse(vowels.begin(), vowels.end());

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (v.contains(s[i])) {
                s[i] = vowels[j];
                j++;
            }
        }

        return s;
    }
};
