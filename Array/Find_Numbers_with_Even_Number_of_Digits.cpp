// Time Complexity: O(n * log₁₀(max(nums[i])))
// Space Complexity: O(1)

class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int n = nums.size();

        int count = 0;

        for(int i=0;i<n;i++) {
            int number = nums[i];
            int num_count = 0;

            while(number > 0) {
                num_count++;
                number /= 10;
            }

            if(num_count % 2 == 0) {
                count++;
            }
        }

        return count;
    }
};
