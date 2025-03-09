class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        int n = candyType.size();
        sort(candyType.begin(), candyType.end());

        int unique = 1;
        for(int i=1;i<n;i++) {
            if(candyType[i] != candyType[i - 1]) {
                unique++;
            }
        }

        int ans = n / 2;

        if(unique > ans) {
            return ans;
        }
        else {
            return unique;
        }
    }
};
