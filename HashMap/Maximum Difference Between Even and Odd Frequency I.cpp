// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    int maxDifference(string s) {
        int n = s.size();

        vector<int> freq(26, 0);

        for(char ch : s) {
            freq[ch - 'a']++;
        }
        
        int even_count = INT_MAX, odd_count = INT_MIN;
        for(int i=0;i<freq.size();i++) {
            if(freq[i] > 0) {
                if(freq[i] % 2 == 0) {
                even_count = min(even_count, freq[i]);
            } else {
                odd_count = max(odd_count, freq[i]);
            }
            }
        }

        return odd_count - even_count;
    }
};
