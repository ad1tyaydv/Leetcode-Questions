// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:

    bool isNonZero(int num) {
        while(num > 0) {
            if(num % 10 == 0) {
                return false;
            }
            num /= 10;
        }

        return true;
    }

    vector<int> getNoZeroIntegers(int n) {
      
        for(int i=1;i<=n;i++) {
            int b = n - i;
            if(isNonZero(i) && isNonZero(b)) {
                return {i, b};
            }
        }

        return {-1, -1};
    }
};
