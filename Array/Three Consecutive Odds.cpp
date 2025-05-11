// Approach - 1 (Liner brute force)
// Time Complexity - O(n)
// Space Complexity - O(1)

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int n = arr.size();
        
        if(n < 3)  return false;

        for(int i=0;i<n-2;i++) {
            if(arr[i] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i + 2] % 2 != 0) {
                return true;
            }
        }

        return false;
    }
};


--------------------------------------------------------------------------------------------------------------------------

// Approach - 2 (Counting)
// Time Complexity - O(n)
// Space Complexity - O(1)

public:
    bool threeConsecutiveOdds(vector<int>& arr) {

        int n = arr.size();

        int count = 0;
        for(int i=0;i<n;i++) {
            if(arr[i] % 2 != 0) {
                count++;
            }
            else {
                count = 0;
            }

            if(count == 3) {
                return true;
            }
        }

        return false;
    }
};
