// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    string removeTrailingZeros(string num) {
        
        int n = num.size();

        int i = n - 1;

        while(i >= 0 && num[i] == '0') {
            i--;
        }

        string result = "";
        for(int j=0;j<=i;j++) {
            result += num[j];
        }

        return result;
    }
};
