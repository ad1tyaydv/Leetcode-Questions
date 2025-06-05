// Time Complexity - O(n)
// Space Complexity - (n)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        vector<int> count(256, 0);
        int first = 0, second = 0, max_length = 0;
        while(second < n) {
            while(count[s[second]]) {
                count[s[first]] = 0;
                first++;
            }

            count[s[second]] = 1;
            max_length = max(max_length, second - first + 1);
            second++;
        }

        return max_length;
    }
};
