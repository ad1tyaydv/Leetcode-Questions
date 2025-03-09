class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        int n = nums.size();
        int start = 0, end = n - 1;
        int count = 0;
        sort(nums.begin(), nums.end());

        while(start < end) {
            if(nums[start] + nums[end] == k) {
                count++;
                start++;
                end--;
            }
            else if(nums[start] + nums[end] < k) {
                start++;
            }
            else {
                end--;
            }
        }

        return count;
    }
};
