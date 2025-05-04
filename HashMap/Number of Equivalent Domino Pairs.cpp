// Approach - 1 (Using map of pair)
// Time Complexity - O(n * logn)
// Space Complexity - O(n)

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int, int>, int> mp;

        for(auto &num : dominoes) {
            if(num[0] > num[1]) {
                swap(num[0], num[1]);
            }

            mp[{num[0], num[1]}]++;
        }

        int result = 0;
        for(auto &i : mp) {
            int freq = i.second;
            result += freq * (freq - 1) / 2;
        }

        return result;
    }
};

-------------------------------------------------------------------------------------------------------------------------

// Approach - 2 (Constant space)
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> freq(100);

        int count = 0;

        for(auto &i : dominoes) {
            if(i[0] > i[1]) {
                swap(i[0], i[1]);
            }

            int num = i[0] * 10 + i[1];

            count += freq[num];
            freq[num]++;
        }

        return count;
    }
};
