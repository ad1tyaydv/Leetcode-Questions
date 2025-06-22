// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        
        int n = s.size();

        int add = n % k;
        vector<string> result;
        int i = 0;
        for(i=0;i<n-add;i+=k) {
            string str = s.substr(i, k);
            result.push_back(str);
        }

        if(add > 0) {
            string add_fill = s.substr(i);

            while(add_fill.size() < k) {
                add_fill += fill;
            }

            result.push_back(add_fill);
        }

        return result;
    }
};
