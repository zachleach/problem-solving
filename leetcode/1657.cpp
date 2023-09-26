class Solution {
public:
    /*
        since you can swap any characters, order doesn't matter (sorting could happen)
        you can think of each string as a map<char, int> counter

        given this operation
            choose two characters
            replace all occurrences of ch1 with ch2
            replace all occurrences of ch2 with ch1

        given two str1 and str2, can you apply the operation any number of times to satisfy these two conditions
        1. str1 has the same character set as str2
        2. each char in str1 has the same counts as in str2

        notice that the operation allows you to swap the counts of any two characters

        because of prior knowledge that given an infinite amount of swaps guarantees you can
        generate any permutation of something, this problem simplifies to:
        
        does str1 have the same character set as str2, and
        does str1 have the same set of counts as str2

    */
    bool closeStrings(string word1, string word2) {
        set<char> s1_chars(word1.begin(), word1.end());
        set<char> s2_chars(word2.begin(), word2.end());

        if (s1_chars != s2_chars) {
            return false;
        }

        map<char, int> s1, s2;
        for (char ch: word1) {
            s1[ch]++;
        }
        for (char ch: word2) {
            s2[ch]++;
        }

        vector<int> s1_cnts, s2_cnts;
        for (auto [ch, cnt]: s1) {
            s1_cnts.push_back(cnt);
        }
        for (auto [ch, cnt]: s2) {
            s2_cnts.push_back(cnt);
        }

        sort(s1_cnts.begin(), s1_cnts.end());
        sort(s2_cnts.begin(), s2_cnts.end());

        return s1_cnts == s2_cnts;
    }
};
