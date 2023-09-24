class Solution {
public:
    bool isSubsequence(string s, string t) {
        return twoPointers(s, t);
    }

    /*
        keep an index for iterating over t
        keep an index for iterating over s
        
        iterate over t:
            if t[i] == s[j]:
                i++
                j++

            else:
                i++
        
        return j == s.size() - 1

    */
    bool twoPointers(string s, string t) {
        int i = 0, j = 0;
        int n = t.size();
        for (int i = 0; i < n; i++) {
            if (t[i] == s[j]) {
                j++;
            }
        }

        return j >= s.size();
    }
};
