// Time Comlexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int sum = 0;
        for(int i=0;i<k;i++) {
            sum += cardPoints[i];
        }

        int result = INT_MIN;
        int temp = sum;
        for(int i=k-1;i>=0;i--) {
            temp -= cardPoints[i];
            temp += cardPoints[n - k + i];
            
            result = max(result, temp);
        }

        return result;
    }
};
