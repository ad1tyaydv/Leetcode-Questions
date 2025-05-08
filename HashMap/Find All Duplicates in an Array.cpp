// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> freq(n + 1, 0);
        for(int i=0;i<n;i++) {
            freq[nums[i]]++;
        }

        vector<int> result;
        for(int i=0;i<freq.size();i++) {
            if(freq[i] > 1) {
                result.push_back(i);
            }
        }

        return result;
    }
};


---------------------------------------------------------------------------------------------------------------------------

// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int n = nums.size();

        vector<int> result;
        for(int i=0;i<n;i++) {
            int num = abs(nums[i]);
            int index = num - 1;

            if(nums[index] < 0) {
                result.push_back(num);
            }
            else {
                nums[index] = -nums[index];
            }
        }

        return result;
    }
};
