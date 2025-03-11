class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int right = 0, left = 0, maxlength = 0, zeros = 0;

        while(right < nums.size()) {
            if(nums[right] == 0 ) {
                zeros++;
            }

            if(zeros > k) {
                if(nums[left] == 0) {
                    zeros--;
                }
                left++;
            }

            if(zeros <= k) {
                int length = right - left + 1;
                maxlength = max(length, maxlength);
            }

            right++;
        }

        return maxlength;
    }
};
