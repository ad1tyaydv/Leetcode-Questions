// Time Complexity - O(n)
// Space Complexity - O(n)

class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> result;
        
        if(n == 1) {
            result.push_back(0);
            return result;
        }

        if(n % 2 == 0) {
            for(int i=1;i<=n/2;i++) {
                result.push_back(i);
                result.push_back(-i);
            }
        } else {
            for(int i=1;i<=n/2;i++) {
                result.push_back(i);
                result.push_back(-i);
            }
            result.push_back(0);
        }

        return result;
    }
};
