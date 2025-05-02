// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k <= 1) {   // if k == 0 or k == 1 (According to the Constraints given in the problem)
            return 0;
        }
        
        int i = 0;
        int j = 0;
        long long mul = 1;
        int count = 0;

        while(j < n) {
            mul *= nums[j];

            while(mul >= k) {
                mul /= nums[i];
                i++;
            }

            count += (j - i + 1);
            j++;
        }

        return count;
    }
};
