class Solution {
public:
    /*
        this falls under the category of array transformation

        brute force you would erase all '*' characters and characters to the immediate left
        a remove() operation is typically O(n) for an array
        since n < 10e5, O(n^2) will TLE

        you can solve this in two passes with a modified removal method in O(n) space
        nevermind

        note the closest non-star character to the left part
        you find a star, you have to traverse left until you find a non-star character

        build the result string on a stack
        once you encounter a '*' pop the top char on the result string (because it will be deleted)
        return the stack as a string

    */
    string removeStars(string s) {
        int n = s.size();
        stack<char> res;
        for (char ch: s) {
            if (ch != '*') {
                res.push(ch);
            }
            else {
                res.pop();
            }
        }

        s = "";
        while (res.size() > 0) {
            s += res.top();
            res.pop();
        }
        reverse(s.begin(), s.end());

        return s;
    }
};
