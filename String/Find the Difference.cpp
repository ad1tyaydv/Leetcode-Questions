// Time Complexity - O(n)
// Space Complexity -O(n)

class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        char result = '\0';
        for(int i=0;i<s.size();i++) {
            if(s[i] != t[i]) {
                result = t[i];
                break;
            }
        }

        if(result == '\0') {
            return t[t.size() - 1];
        }
        else {
            return result;
        }
    }
};
