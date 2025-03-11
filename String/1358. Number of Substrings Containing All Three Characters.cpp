class Solution {
public:
    int numberOfSubstrings(string s) {
        
        int n = s.size();
        int result = 0;

        vector<int> freq(3, 0);

        int i = 0;
        int j = 0;
        while(j < n) {
            char ch = s[j];
            freq[ch - 'a']++;

            while(freq[0] > 0 && freq[1] > 0 && freq[2] > 0) {
                result += (n - j);

                freq[s[i] - 'a']--;
                i++;
            }
            j++;
        }

        return result;
    }
};
