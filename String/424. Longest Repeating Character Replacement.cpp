class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n = s.size();
        int right = 0, left = 0, maxlength = 0, maxfreq = 0;
        unordered_map<int, int> hash;

        while(right < n) {
            hash[s[right] - 'A']++;
            maxfreq = max(maxfreq, hash[s[right] - 'A']);

            if((right - left + 1) - maxfreq > k) {
                hash[s[left] - 'A']--;
                maxfreq = 0;

                left++;
            }

            if((right - left + 1) - maxfreq <= k) {
                maxlength = max(maxlength, right - left + 1);
            }
            right++;
        }

        return maxlength;
    }
};
