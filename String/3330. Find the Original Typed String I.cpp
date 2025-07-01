// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int possibleStringCount(string word) {
        
        int n = word.size();

        int result = n;
        for(int i=1;i<n;i++) {
            if(word[i] != word[i - 1]) {
                result--;
            }
        }

        return result;
    }
};
