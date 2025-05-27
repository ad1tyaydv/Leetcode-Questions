// Time Comeplextiy - O(n)
// Space Complexity - O(1)

class Solution {
public:

    int not_divisible(int n, int m) {

        int sum1 = 0;
        for(int i=1;i<=n;i++) {
            if(i % m != 0) {
                sum1 += i;
            }
        }

        return sum1;
    }


    int divisible(int n, int m) {

        int sum2 = 0;
        for(int i=1;i<=n;i++) {
            if(i % m == 0) {
                sum2 += i;
            }
        }

        return sum2;
    }


    int differenceOfSums(int n, int m) {
        
        int num1 = not_divisible(n, m);
        int num2 = divisible(n, m);

        return num1 - num2;
    }
};
