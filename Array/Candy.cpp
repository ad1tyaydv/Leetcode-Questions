// Approach - 1 (O(2n) Space Complexity)
// Space Complexity - O(2n)
// Time Complexity -O(n)

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        vector<int> count(n, 1);

        for(int i=1;i<n;i++) {
            if(ratings[i] > ratings[i - 1]) {
                count[i] = max(count[i], count[i-1] + 1);
            }
        }

        for(int i=n-2;i>=0;i--) {
            if(ratings[i] > ratings[i + 1]) {
                count[i] = max(count[i], count[i + 1] + 1);
            }
        }

        int result = 0;
        for(int num : count) {
            result += num;
        }

        return result;
    }
};

------------------------------------------------------------------------------------------------------------------------------------------

// Approach - 2 (O(n) Space Complexity)
// Space Complexity - O(2n)
// Time Complexity -O(n)

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();

        int candy = n;
        int i = 1;

        while(i < n) {
            if(ratings[i] == ratings[i - 1]) {
                i++;
                continue;
            }

            int peak = 0;
            while(ratings[i] > ratings[i - 1]) {
                peak++;
                candy += peak;
                i++;

                if(i == n) {
                    return candy;
                }
            }

            int dip = 0;
            while(i < n && ratings[i] < ratings[i - 1]) {
                dip++;
                candy += dip;
                i++;
            }

            candy -= min(peak, dip);
        }

        return candy;
    }
};
