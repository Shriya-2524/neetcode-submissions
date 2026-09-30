class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        set<char> seen;
        int l = 0;
        int max = 0;

        for (int r = 0; r < s.size(); r++) {
            while (seen.count(s[r])) {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            int size = r - l+1;
            if (size > max) {
                max = size;
            }
        }
        return max;
    }
};
