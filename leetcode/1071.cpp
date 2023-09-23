class Solution {
public:
    /*
        find the shortest substring prefixing both s1 and s2

        for each prefix substr:
            determine if you can concatenate the prefix substr some amount of times to create both s1 and s2

    */
    string gcdOfStrings(string s2, string s1) {
        if (s2.size() < s1.size()) {
            string temp = s1;
            s1 = s2;
            s2 = temp;
        }

        vector<string> subs;
        int n = s1.size();
        for (int i = 0; i < n; i++) {
            subs.push_back(s1.substr(0, n - i));
        }

        // iterate from the largest size pfix substr to the smallest size prefix substr
        for (string pfix: subs) {
            // if both strings couldn't consist of some multiple of the prefix string
            if (s1.size() % pfix.size() != 0) {
                continue;
            }
            if (s2.size() % pfix.size() != 0) {
                continue;
            }
            
            // get how many times the prefix could repeat for each string
            int n = s1.size() / pfix.size();
            int m = s2.size() / pfix.size();
            string multiple_s1 = "";
            string multiple_s2 = "";

            // create strings of repeating prefix
            for (int i = 0; i < n; i++) {
                multiple_s1 += pfix;
            }
            for (int i = 0; i < m; i++) {
                multiple_s2 += pfix;
            }
            
            // if each string consists only of some multiple of the given prefix
            // since we are iterating from largest substr to smallest substr
            // we have found the largest prefix substr that satisfies the required conditions
            if (multiple_s1 == s1 && multiple_s2 == s2) {
                return pfix;
            }
        }

        return "";
    }
};
