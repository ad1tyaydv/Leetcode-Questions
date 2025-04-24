class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {

        int n = nums.size();
        vector<int> freq(101, 0);

        for(int i=0;i<n;i++) {
            freq[nums[i]]++;
        }

        int result = 0;
        for(int i=0;i<freq.size();i++) {
            int count = freq[i];
            result += count * (count - 1) / 2;
        }

        return result;
    }
};
