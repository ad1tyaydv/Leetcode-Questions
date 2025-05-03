// Time Complexity - O(n)
// Space Comeplexity - O(1)
class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        int result = INT_MAX;

        for(int i=1;i<=6;i++) {
            int rotatetop = 0;
            int rotatebottom = 0;

            bool possible = true;

            for(int j=0;j<n;j++) {
                if(tops[j] != i && bottoms[j] != i) {
                    possible = false;
                    break;
                }

                if(tops[j] != i) rotatetop++;
                if(bottoms[j] != i ) rotatebottom++;
            }

            if(possible) {
                result = min(result, min(rotatetop, rotatebottom));
            }
        }

        return (result == INT_MAX) ? -1 : result;
    }
};
