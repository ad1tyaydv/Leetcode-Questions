// Time Complexity - O(1)
// Space Complexity -O(1)

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int n = operations.size();

        int result = 0;
        for(int i=0;i<n;i++) {
            if(operations[i] == "++X" || operations[i] == "X++") {
                result++;
            }
            else {
                result--;
            }
        }

        return result;
    }
};
