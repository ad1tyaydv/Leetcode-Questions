class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> ans(nums.size(), 0);
        int start = 0, end = nums.size() - 1;

        int i = 0, j = end;
        while(i < nums.size()) {
            if(nums[i] < pivot) {
                ans[start] = nums[i];
                start++;
            }
            if(nums[j] > pivot) {
                ans[end] = nums[j];
                end--;
            }
            i++;
            j--;
        }

        while(start <= end) {
            ans[start] = pivot;
            start++;
        }

        return ans;
    }
};
