class Solution {
public:
    int longestPalindrome(vector<string>& words) {

        vector<vector<int>> mpp(26, vector<int>(26, 0));
        int count = 0, middle = 0;

        for (auto& s : words) {
            int x = s[0] - 'a';
            int y = s[1] - 'a';

            if (mpp[y][x] > 0) {
                mpp[y][x]--;
                count += 4;
            } 
            else {
                mpp[x][y]++;
            }
        }

        for (int i = 0; i < 26; i++) {
            if (mpp[i][i] > 0) {
                count += 2;
                break;
            }
        }

    return count;
    }
};
