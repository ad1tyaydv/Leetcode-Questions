// Approach - 1 (Using Sliding Window)
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:

    long long countSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        long long maxi = *max_element(nums.begin(), nums.end());
        long long result = 0;

        int i = 0;
        int j = 0;
        int count = 0;
        while(j < n) {
            if(nums[j] == maxi) {
                count++;
            }

            while(count >= k) {
                result += n - j;

                if(nums[i] == maxi) {
                    count--;
                }
                i++;
            }
            j++;
        }

        return result;
    }
};



----------------------------------------------------------------------------------------------------------------
// Approach - 2  (Using HashMap)
// Time complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:

    long long countSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        
        int maxE = *max_element(nums.begin(), nums.end());
        long long result = 0;
        vector<int> maxIndex;

        for(int i=0;i<n;i++) {
            if(nums[i] == maxE) {
                maxIndex.push_back(i);
            }

            int size = maxIndex.size();

            if(size >= k) {
                int last_i = maxIndex[size - k];
                result += (last_i + 1);
            }
        }

        return result;
    }
};
