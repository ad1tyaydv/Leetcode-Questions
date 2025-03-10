class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate, n = nums.size(), count = 0;

        for(int i=0;i<n;i++) {
            if(count == 0) {
                candidate = nums[i];
                count++;
            }
            else if(candidate == nums[i]) {
                count++;
            }
            else {
                count--;
            }
        }

        return candidate;
    }
};
