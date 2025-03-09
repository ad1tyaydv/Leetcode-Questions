class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi = INT_MIN, prefix_sum = 0;

        for(int i=0;i<nums.size();i++) {
            prefix_sum += nums[i];
            maxi = max(maxi, prefix_sum);

            if(prefix_sum < 0) {
                prefix_sum = 0;
            }
        }

        return maxi;
    }
};
