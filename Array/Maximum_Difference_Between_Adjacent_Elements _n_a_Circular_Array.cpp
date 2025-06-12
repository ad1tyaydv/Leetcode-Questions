// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n = nums.size();
        
        int result = 0;
        for(int i=1;i<2*n;i++) {
            result = max(result, abs(nums[i % n] - nums[(i - 1) % n]));
        }

        return result;
    }
};
