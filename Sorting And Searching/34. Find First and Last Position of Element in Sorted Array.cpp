class Solution {
public:

    int leftsearch(vector<int>& nums, int target) {
        
        int start = 0, end = nums.size() - 1, mid;
        int left_most = -1;
        while(start <= end) {
            mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                left_most = mid;
                end = mid - 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return left_most;
    }

    int rightsearch(vector<int>& nums, int target) {
        
        int start = 0, end = nums.size() - 1, mid;
        int right_most = -1;
        while(start <= end) {
            mid = start + (end - start) / 2;

            if(nums[mid] == target) {
                right_most = mid;
                start = mid + 1;
            }
            else if(nums[mid] > target) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
       return right_most;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        return {leftsearch(nums, target), rightsearch(nums, target)};
    }
};
