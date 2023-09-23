class Solution {
public:

    bool div3(int n) {
        return n % 3 == 0;
    }

    bool div5(int n) {
        return n % 5 == 0;
    }

    vector<string> fizzBuzz(int n) {
        vector<string> ans;

        for (int i = 1; i < n + 1; i++) {
            if (div3(i) && div5(i)) {
                ans.push_back("FizzBuzz");
            }
            else if (div3(i) && !div5(i)) {
                ans.push_back("Fizz");
            }
            else if (!div3(i) && div5(i)) {
                ans.push_back("Buzz");
            }
            else {
                ans.push_back(std::to_string(i));
            }
        }

        return ans;
    }
};
