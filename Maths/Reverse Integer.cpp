// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    int reverse(int x) {
        
        int num = x;
        
        int ans = 0;
        while(num != 0) {
            int rem = num % 10;
            num /= 10;

            if(ans > INT_MAX / 10 || ans < INT_MIN/10) {
                return 0;
            }

            ans = ans * 10 + rem;
        }

        return ans;
    }
};
