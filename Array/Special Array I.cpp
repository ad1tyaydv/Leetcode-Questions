// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1) {
            return true;
        }

        bool check = false;
        for(int i=0;i<n-1;i++) {
            int first = nums[i];
            int second = nums[i + 1];

            if(first % 2 == 0 && second % 2 != 0 || first % 2 != 0 && second % 2 == 0) {
                check = true;
            }
            else {
                check = false;
                break;
            }
        }

        return (check == true) ? true : false;
    }
};
