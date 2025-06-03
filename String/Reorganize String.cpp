// Time Complexity: O(n)
// Time Complexity: O(n)

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();

        vector<int> freq(26, 0);
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        int maxCount = 0;
        char maxChar;

        for(int i=0;i<26;i++) {
            if(freq[i] > maxCount) {
                maxCount = freq[i];
                maxChar = 'a' + i;
            }
        }

        if(maxCount > (n + 1) / 2) {
            return "";
        }

        string result(n, ' ');
        int index = 0;

        while(freq[maxChar - 'a'] > 0) {
            result[index] = maxChar;
            index += 2;
            freq[maxChar - 'a']--;
        }

        for(int i=0;i<26;i++) {
            while(freq[i] > 0) {
                if(index >= n) {
                    index = 1;
                }

                result[index] = 'a' + i;
                index += 2;
                freq[i]--;
            }
        }

        return result;
    }
};
