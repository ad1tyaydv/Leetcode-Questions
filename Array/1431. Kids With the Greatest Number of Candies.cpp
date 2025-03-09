class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();

        int maxi = candies[0];
        for(int i=1;i<n;i++) {
            maxi = max(maxi, candies[i]);
        }

        vector<bool> ans;
        for(int i=0;i<n;i++) {
            if(candies[i] + extraCandies >= maxi) {
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }

        return ans;
    }
};
