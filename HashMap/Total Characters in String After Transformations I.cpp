class Solution {
public:
    int mod = 1e9 + 7;
    int lengthAfterTransformations(string s, int t) {
        int n = s.size();

        vector<int> freq(26, 0);

        for(char ch: s) {
            freq[ch - 'a']++;
        }

        while(t--) {
            vector<int> temp(26, 0);

            for(int i=0;i<26;i++) {
                char ch = i + 'a';
                int frequency = freq[i];

                if(ch != 'z') {
                    temp[(ch + 1) - 'a'] = (temp[(ch + 1) - 'a'] + frequency) % mod;
                }
                else {
                    temp['a' - 'a'] = (temp['a' - 'a'] + frequency) % mod;
                    temp['b' - 'a'] = (temp['b' - 'a'] + frequency) % mod;
                }
            }
            freq = temp;
        }

        int result = 0;
        for(int i = 0; i < 26; i++) {
            result = (result + freq[i]) % mod;
        }

        return result;
    }
};
