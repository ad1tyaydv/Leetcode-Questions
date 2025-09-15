// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        bool broken[26] = {false};

        for(int i=0;i<brokenLetters.size();i++) {
            broken[brokenLetters[i] - 'a'] = true;
        }

        int count = 0;
        bool isBroken = false;

        for(int i=0;i<=text.size();i++) {
            if(i == text.size() || text[i] == ' ') {
                if(!isBroken) {
                    count++;
                }
                isBroken = false;
            } else {
                if(broken[text[i] - 'a']) {
                    isBroken = true;
                }
            }
        }

        return count;
    }
};
