class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int start = 0, end = nums.size() - 1, mover = 0;

        while(mover <= end) {
            if(nums[mover] == 0) {
                swap(nums[mover], nums[start]);
                start++;
                mover++;
            }
            else if(nums[mover] == 1) {
                mover++;
            }
            else {
                swap(nums[mover], nums[end]);
                end--;
            }
        }
    }
};
