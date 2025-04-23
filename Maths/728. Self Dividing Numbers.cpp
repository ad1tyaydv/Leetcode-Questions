class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result;

        for(int i=left;i<=right;i++) {
            int num = i;
            bool check = true;

            while(num) {
                int rem = num % 10;
                if(rem == 0 || i % rem != 0) {
                    check = false;
                    break;
                }
                num = num / 10;
            }

            if(check == true) {
                result.push_back(i);
            }
        }

        return result;
    }
};
