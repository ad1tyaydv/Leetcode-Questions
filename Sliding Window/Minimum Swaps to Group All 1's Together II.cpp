// Approach - 1 (Using one extra space)
// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total_ones = count(nums.begin(), nums.end(), 1);
        int n = nums.size();

        if(total_ones == 0 || total_ones == n) {
            return 0;
        }

        vector<int> new_nums = nums;
        new_nums.insert(new_nums.end(), nums.begin(), nums.end());

        int max_one_window = 0, current_ones = 0;
        for(int i=0;i<new_nums.size();i++) {
            if(new_nums[i] == 1) {
                current_ones++;
            }

            if(i >= total_ones) {
                if(new_nums[i - total_ones] == 1) {
                    current_ones--;
                }
            }

            if(i >= total_ones - 1) {
                max_one_window = max(max_one_window, current_ones);
            }
        }

        return total_ones - max_one_window;
    }
};


------------------------------------------------------------------------------------------------------------------------------

// Approach - 2 (Using constant space)
// Time Complexity - O(n)
// Space Complexity - O(1)


class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        int total_ones = count(nums.begin(), nums.end(), 1);

        if(total_ones == 0 || total_ones == n) {
            return 0;
        }

        int max_one_window = 0, current_one = 0;

        for(int i=0;i<2*n;i++) {
            int right = i % n;

            if(nums[right] == 1) {
                current_one++;
            }

            if(i >= total_ones) {
                int left = (i - total_ones) % n ;
                if(nums[left] == 1) {
                    current_one--;
                }
            }

            if(i >= total_ones - 1) {
                max_one_window = max(max_one_window, current_one);
            }
        }


        return total_ones - max_one_window;
    }
};
