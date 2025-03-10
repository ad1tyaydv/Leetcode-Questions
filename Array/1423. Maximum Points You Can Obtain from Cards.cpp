class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {

        int n = cardPoints.size();

        int totalsum = 0;
        for(int i=0;i<k;i++) {
            totalsum += cardPoints[i];
        }

        int rightsum = 0;
        int ans = totalsum;

        for(int i=0;i<k;i++) {
            totalsum -= cardPoints[k - 1 - i];
            rightsum += cardPoints[n - 1 - i];

            ans = max(ans, rightsum + totalsum);
        }

        return ans;
    }
};
