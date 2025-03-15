class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        int n = nums.size();
        sort(nums.begin(), nums.end());

        long long closest = INT_MAX;

        for(int k=0;k<=n-3;k++) {

            int i = k + 1;
            int j = n - 1;

            while(i < j) {
                int sum = nums[i] + nums[j] + nums[k];

                if(abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }

                if(sum < target) {
                    i++;
                }
                else {
                    j--;
                }
            }
        }

        return closest;
    }
};
