class Solution {
public:
    int maxVowels(string s, int k) {
        return slidingWindow(s, k);
    }

    /*
        keep track of the number of vowels in the window
        keep track of the max total vowels seen so far

        iterate n - k times:
            if the element leaving the window is a vowel:
                decrement the vowel count
            if the element entering the window is a vowel:
                increment the vowel count
            
            update the max total vowels seen

    */
    int slidingWindow(string s, int k) {
        int n = s.size();
        int vow_count = 0;
        set<char> v = { 'a', 'e', 'i', 'o', 'u' };
        for (int i = 0; i < k; i++) {
            vow_count += v.contains(s[i]);
        }
        
        int max_vowels = vow_count;
        for (int i = 0; i < n - k; i++) {
            if (v.contains(s[i])) {
                vow_count--;
            }
            if (v.contains(s[i + k])) {
                vow_count++;
            }

            max_vowels = max(max_vowels, vow_count);
        }

        return max_vowels;
    }
};
