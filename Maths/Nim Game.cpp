// Time Complexity - O(1)
// Space Complexity - O(1)

class Solution {
public:
    bool canWinNim(int n) {
        
        return (n % 4 == 0) ? false : true;
    }
};
